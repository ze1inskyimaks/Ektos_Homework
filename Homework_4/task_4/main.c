#include "secondary.h"

int main(void) {
    func_ptr_t func_ptr = get_func_ptr(); // Get pointer to a function returned by get_func_ptr

    func_ptr();

    return 0;
}
