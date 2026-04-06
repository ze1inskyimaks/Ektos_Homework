#include <stdio.h>

static int functionA(void) {
    printf("FunctionA was called.\n");
    return 1;
}

static int functionB(void) {
    printf("FunctionB was called.\n");
    return 0;
}

int main(void) {

    //----TASK_1------
    printf("Condition #1\n");
    if (functionA() || functionB()) { // Condition was true! FuncA was called, FuncB wasn`t
        printf("Condition was worked!\n");
    }

    printf("Condition #2\n");
    if (functionA() && functionB()) { // Condition was false! FuncA was called, FuncB also was called
        printf("Condition was worked!\n");
    }

    printf("Condition #3\n");
    if (functionB() && functionA()) { // Condition was false! FuncB was called, FuncA wasn`t
        printf("Condition was worked!\n");
    }

    //----TASK_2------
    printf("Condition #4\n");
    if (functionA() & functionB()) { // Condition wasn`t worked! FuncA was called, FuncB also was called
        printf("Condition was worked!\n");
    }

    printf("Condition #5\n");
    if (2 && 3) { // Condition was true because both operands are non-zero
        printf("Condition was worked!\n");
    }

    printf("Condition #6\n");
    if (1 & 2) { //Condition was false because we have bitwise AND: 0001 & 0010 = 0000
        printf("Condition was worked!\n");
    }
    return 0;
}