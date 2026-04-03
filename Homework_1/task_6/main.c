#include <stdint.h>
#include <stdio.h>

void showBit(uint8_t const output) {
    for (int j = 7; j >= 0; j--) {
        printf("%d", (output >> j) & 1);
    }
    printf("\n");
}

int main(void) {
    uint8_t e1 = 5;
    int8_t e2 = -5;

    printf("e1: %d\n", e1);
    showBit(e1);
    e1 = e1 >> 2;
    printf("e1: %d\n", e1);
    showBit(e1);

    printf("---------------\n");

    printf("e2: %d\n", e2);
    showBit(e2);
    e2 = e2 >> 2;
    printf("e2: %d\n", e2);
    showBit(e2);
}