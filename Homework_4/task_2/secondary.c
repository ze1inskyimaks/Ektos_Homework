#include <stdio.h>

extern int global_variable; //'extern' means that this variable is defined in another file.
static int static_global_variable = 1;

void secondary_function(int** ptr_on_variable) {
    global_variable++;

    int local_variable = 1;
    static int static_local_variable = 1;
    *ptr_on_variable = &static_local_variable;

    printf("Global variable value in secondary file: %d\n", global_variable);
    printf("Static global variable value in secondary file: %d\n", static_global_variable);

    printf("Local variable value in secondary file: %d\n", local_variable);
    printf("Static local variable value in secondary file: %d\n", static_local_variable);
}