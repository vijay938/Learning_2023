#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100
#define MAX_ENTRIES 100

struct SensorData {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[10];
};

void extractData(FILE *file, struct SensorData data[], int *numEntries) {
    char line[MAX_LINE_LENGTH];
    *numEntries = 0;

    while (fgets(line, sizeof(line), file) != NULL) {
        char *token = strtok(line, ",");
        
        if (token != NULL) {
            data[*numEntries].entryNo = atoi(token);

            token = strtok(NULL, ",");
            strcpy(data[*numEntries].sensorNo, token);

            token = strtok(NULL, ",");
            data[*numEntries].temperature = atof(token);

            token = strtok(NULL, ",");
            data[*numEntries].humidity = atoi(token);

            token = strtok(NULL, ",");
            data[*numEntries].light = atoi(token);

            token = strtok(NULL, ",");
            strcpy(data[*numEntries].time, token);

            (*numEntries)++;
        }
    }
}

void displayData(struct SensorData data[], int numEntries) {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTime\n");
    printf("--------------------------------------------------------\n");

    for (int i = 0; i < numEntries; i++) {
        printf("%d\t%s\t\t%.1f\t\t%d\t\t%d\t%s\n",
               data[i].entryNo,
               data[i].sensorNo,
               data[i].temperature,
               data[i].humidity,
               data[i].light,
               data[i].time);
    }
}

int main() {
    FILE *file;
    char fileName[100];
    struct SensorData data[MAX_ENTRIES];
    int numEntries = 0;

    // Input file name
    printf("Enter the name of the CSV file: ");
    scanf("%s", fileName);

    // Open the file
    file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    // Extract data from the file
    extractData(file, data, &numEntries);

    // Close the file
    fclose(file);

    // Display the extracted data
    displayData(data, numEntries);

    return 0;
}
