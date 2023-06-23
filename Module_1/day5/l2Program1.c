#include <stdio.h>
#include <string.h>

// Define the structure to hold sensor information
typedef struct {
    char sensorID[10];
    float temperature;
    int humidity;
    int lightIntensity;
} SensorInfo;

// Function to populate the structure from ASCII data
void populateSensorInfo(SensorInfo* info, const char* data) {
    sscanf(data, " %s-T:%f-H:%d-L:%d", info->sensorID, &info->temperature, &info->humidity, &info->lightIntensity);
}

int main() {
    const char* asciiData = "S1-T:36.5-H:100-L:50";

    SensorInfo sensor;

    // Populate the structure from ASCII data
    populateSensorInfo(&sensor, asciiData);

    // Display the sensor information
    printf("Sensor Info:\n");
    printf("---------------------\n");
    printf("Sensor ID: %s\n", sensor.sensorID);
    printf("Temperature: %.1f C\n", sensor.temperature);
    printf("Humidity: %d\n", sensor.humidity);
    printf("Light Intensity: %d%%\n", sensor.lightIntensity);

    return 0;
}
