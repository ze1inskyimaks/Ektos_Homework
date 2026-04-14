#include <stdio.h>

int global_variable = 0; //lifetime = whole program, scope = all files with 'extern'
static int static_global_variable = 0; //lifetime = whole program, scope = single file

void secondary_function(int** ptr_on_variable);

int main(void) {
    int local_variable = 0; //lifetime = stack frame, scope = function only
    static int static_local_variable = 0; //lifetime = whole program, scope = function only

    printf("Global variable value: %d\n", global_variable);
    printf("Static global variable value: %d\n", static_global_variable);

    printf("Local variable value: %d\n", local_variable);
    printf("Static local variable value: %d\n", static_local_variable);

    int* static_local_variable_from_secondary_file_ptr = NULL;
    secondary_function(&static_local_variable_from_secondary_file_ptr);
    printf("Static local variable value from secondary file: %d\n", *static_local_variable_from_secondary_file_ptr);
    //We can access the value through a pointer returned from the static variable in secondary file

    return 0;
}