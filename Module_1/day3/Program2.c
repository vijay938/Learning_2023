#include <stdio.h>
#include <stdint.h>

void print_bits(uint32_t num) {
    for (int i = 31; i >= 0; i--) {
        uint32_t mask = 1 << i;
        uint32_t bit = (num & mask) ? 1 : 0;
        printf("%u", bit);
    }
    printf("\n");
}

int main() {
    uint32_t num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Binary representation: ");
    print_bits(num);

    return 0;
}
