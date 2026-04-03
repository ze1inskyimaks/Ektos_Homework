#include <stdint.h>
#include <stdio.h>

uint32_t setBit(const uint32_t _arg, const uint8_t _bit) {
    if (32 > _bit) {
        return _arg | 1U << _bit;
    }
    return 0;
}

uint32_t resetBit(const uint32_t _arg, const uint8_t _bit) {
    if (32 > _bit) {
       return _arg & ~(1U << _bit);
    }
    return 0;
}

void showBit(uint32_t const output) {
    for (int j = 31; j >= 0; j--) {
        printf("%d", (output >> j) & 1);
    }
    printf("\n");
}

int main(void) {
    uint32_t b1 = 0x0F0F0F0F;

    b1 = setBit(b1, 5);
    showBit(b1);
    b1 = setBit(b1, 6);
    showBit(b1);
    b1 = resetBit(b1, 1);
    showBit(b1);
    b1 = resetBit(b1, 3);
    showBit(b1);
    return 0;
}