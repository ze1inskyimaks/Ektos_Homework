#include <stdio.h>
#include <string.h>

char dest[10];
char const src[] = "012345678910";

int main(void) {
    memset(dest, 1, sizeof(dest) + 10); // Added trash in memory for simulating used memory
    memset(dest, 0, sizeof(dest)); // Cleared for future variables
    printf("Before using strncpy function: \nDest string: %s, Src string: %s.\n", dest, src); //Dest string: , Src string: 012345678910.
    printf("----------------------\n");

    strncpy(dest, src, sizeof(dest));
    printf("After using strncpy function: \nDest string: %s, Src string: %s.\n", dest, src); //Dest string: 0123456789☺☺☺☺☺☺☺☺☺☺, Src string: 012345678910.

    printf("Dest bytes:\n");
    for (size_t i = 0; i < sizeof(dest) + 5; i++) {
        printf("%02X ", dest[i]); //30 31 32 33 34 35 36 37 38 39 01 01 01 01 01
    }
    printf("\n");
    //conclusion: strncpy doesn`t add '/0' terminator, and because of that printf continue reading bytes in our memory.

    memset(dest, 1, sizeof(dest) + 10);
    memset(dest, 0, sizeof(dest));
    strncpy(dest, "Hi", sizeof(dest));
    printf("----------------------\n");

    strncat(dest, src, 12);
    printf("After using strncat function: \nDest string: %s, Src string: %s.\n", dest, src); //Dest string: Hi0123456789, Src string: 012345678910.

    printf("Dest bytes:\n");
    for (size_t i = 0; i < sizeof(dest) + 10; i++) {
        printf("%02X ", dest[i]); //48 69 30 31 32 33 34 35 36 37 38 39 31 30 00 01 01 01 01 01
    }
    printf("\n");
    //conclusion: strncat add '/0' terminator in the end, even if we have buffer overflow. It can modify another part of memory ahead of it.

    return 0;
}
