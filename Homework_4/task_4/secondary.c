#include "secondary.h"
#include <stdint.h>
#include <stdio.h>

const uint16_t i = 0x0001;
unsigned const char* const c = (unsigned const char *)&i;

static void secondary_function(void) {
    printf("%s\n", *c == 0 ? "big-endian" : "little-endian");
} // Endianness is determined by how the first byte is stored in memory.

func_ptr_t get_func_ptr(void) {
    return &secondary_function;
}