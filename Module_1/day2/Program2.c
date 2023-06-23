#include <stdio.h>

// Generic swap function
void swap(void* a, void* b, size_t size) {
    char* p1 = (char*)a;
    char* p2 = (char*)b;
    char temp;

    for (size_t i = 0; i < size; i++) {
        temp = p1[i];
        p1[i] = p2[i];
        p2[i] = temp;
    }
}

int main() {
    int int1 = 5, int2 = 10;
    double double1 = 3.14, double2 = 2.71;
    char char1 = 'A', char2 = 'B';

    // Swap integers
    printf("Before swapping integers: int1 = %d, int2 = %d\n", int1, int2);
    swap(&int1, &int2, sizeof(int));
    printf("After swapping integers: int1 = %d, int2 = %d\n\n", int1, int2);

    // Swap doubles
    printf("Before swapping doubles: double1 = %lf, double2 = %lf\n", double1, double2);
    swap(&double1, &double2, sizeof(double));
    printf("After swapping doubles: double1 = %lf, double2 = %lf\n\n", double1, double2);

    // Swap characters
    printf("Before swapping characters: char1 = %c, char2 = %c\n", char1, char2);
    swap(&char1, &char2, sizeof(char));
    printf("After swapping characters: char1 = %c, char2 = %c\n", char1, char2);

    return 0;
}
