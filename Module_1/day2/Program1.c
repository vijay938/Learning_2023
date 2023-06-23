#include <stdio.h>
#include <stdint.h>

void print_exponent_parts(double x) {
    uint64_t* ptr = (uint64_t*)&x;

    // Extract the exponent bits
    uint16_t exponent = (*ptr >> 52) & 0x7FF;

    // Convert exponent to hexadecimal
    printf("Exponent (Hex): 0x%X\n", exponent);

    // Convert exponent to binary
    printf("Exponent (Binary): 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    print_exponent_parts(x);
    return 0;
}
