#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int divisor = 1;

    // Iterate over each digit
    while (divisor <= num) {
        int modified_num = (num / (divisor * 10)) * divisor + (num % divisor);

        // Update the largest number if necessary
        if (modified_num > largest) {
            largest = modified_num;
        }

        divisor *= 10;
    }

    return largest;
}

int main() {
    int number;

    // Prompt the user to enter a 4-digit number
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    // Find the largest number by deleting a single digit
    int largest = findLargestNumber(number);

    // Print the largest number
    printf("The largest number by deleting a single digit: %d\n", largest);

    return 0;
}

