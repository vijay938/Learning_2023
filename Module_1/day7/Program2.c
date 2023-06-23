#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void copyFile(const char* sourceFile, const char* destinationFile, int convertToLower, int convertToUpper, int convertToPureUpper) {
    FILE* source = fopen(sourceFile, "r");
    FILE* destination = fopen(destinationFile, "w");

    if (source == NULL || destination == NULL) {
        printf("Error opening files!\n");
        exit(1);
    }

    char ch;
    while ((ch = fgetc(source)) != EOF) {
        if (convertToLower)
            ch = tolower(ch);
        else if (convertToUpper)
            ch = toupper(ch);
        else if (convertToPureUpper)
            ch = islower(ch) ? toupper(ch) : ch;

        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments!\n");
        printf("Usage: ./cp [-u | -l | -s] source_file destination_file\n");
        return 1;
    }

    int convertToLower = 0;
    int convertToUpper = 0;
    int convertToPureUpper = 0;
    char* sourceFile = NULL;
    char* destinationFile = NULL;

    // Parse the command-line arguments
    if (argc == 4) {
        if (strcmp(argv[1], "-l") == 0)
            convertToLower = 1;
        else if (strcmp(argv[1], "-u") == 0)
            convertToUpper = 1;
        else if (strcmp(argv[1], "-s") == 0)
            convertToPureUpper = 1;
        else {
            printf("Invalid option!\n");
            printf("Usage: ./cp [-u | -l | -s] source_file destination_file\n");
            return 1;
        }

        sourceFile = argv[2];
        destinationFile = argv[3];
    } else {
        sourceFile = argv[1];
        destinationFile = argv[2];
    }

    // Perform the file copy operation
    copyFile(sourceFile, destinationFile, convertToLower, convertToUpper, convertToPureUpper);
    printf("File copied successfully!\n");

    return 0;
}
