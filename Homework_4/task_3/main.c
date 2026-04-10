#include <stdint.h>
#include <stdio.h>

const int array[5] = {53, 12, 11, 111, 54};
const int* ptr_to_array = array;

int main(void) {
    //-------TASK_1---------
    printf("-------TASK_1---------\n");
    ptr_to_array++;
    printf("ptr increment result: %d\n", *ptr_to_array);

    ptr_to_array--;
    printf("ptr decrement result: %d\n", *ptr_to_array);

    const int* ptr1 = &ptr_to_array[4];
    const int* ptr2 = &ptr_to_array[0];
    int diff = ptr1 - ptr2; // pointer subtraction returns number of elements between them.
    printf("ptr subtraction: %d\n", diff);

    if (ptr_to_array[3] > ptr_to_array[1]) {
        printf("p3 is after p1 in memory\n");
    }

    //-------TASK_2---------
    printf("-------TASK_2---------\n");

    printf("ptr value before cast: %d\n", *ptr_to_array);
    printf("ptr before cast: %p\n", ptr_to_array);
    //Our pointer on first element of array

    uint64_t* ptr64 = (uint64_t*)ptr_to_array; // We reinterpret ptr from 4 bytes to 8 bytes, changing pointer step size
    ptr64++; // Move forward by 8 bytes in memory
    int* ptr = (int*)ptr64; // Cast back

    printf("ptr value after cast: %d\n", *ptr);
    printf("ptr after cast:  %p\n", ptr);
    //After all our manipulation we shifted on 2 elements, because after casting back we have 4 bytes ptr

    return 0;
}