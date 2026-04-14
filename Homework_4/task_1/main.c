#include <stdio.h>

static int value = 1;

static void fucntion(void) {
    int value = 100;

    switch (value) {
        case 1: { //This condition is only used as a theoretical assumption for a hypothetical test.
            printf("If you see this value: %d, that means you see the global variable\n", value);
            int value = 0;
            printf("If you see this value: %d, that means you see the local variable from exactly this code block\n", value);
            break;
        }
        case 100: {
            printf("If you see this value: %d, that means you see the local variable from function scope\n", value);
            int value = 0;
            printf("If you see this value: %d, that means you see the local variable from exactly this code block\n", value);
            break;
        }
        default: {
            break;
        }
    }
}
//conclusion: We have three variables with the same name, and the program always use the variable from the latest visible scope.

int main(void) {
    fucntion();
    return 0;
}
