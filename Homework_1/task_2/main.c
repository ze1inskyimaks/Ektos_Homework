#include <stdio.h>
#include <stdint.h>

const static int8_t array[4] = {127, -1, 10, -128};

int8_t add_age(const int8_t _arg) {
    return 20 + _arg;
}

int main(void) {
    printf("");
    for (int8_t i = 0; i < 4; i++) {
        static int8_t output;

        output = add_age(array[i]);

        printf("Number in arg: %d\n", array[i]);
        printf("Result from %d iteration:\n%d\n", i, output);
        for (int j = 7; j >= 0; j--) {
            printf("%d", (output >> j) & 1);
        }
        printf("\n");
    }
    return 0;
}