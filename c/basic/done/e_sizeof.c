#include <stdio.h>

#include <stdint.h> // needed for uinit_XX

int main(){
    printf("size of two ints: %zu\n", 2*sizeof(int));
    printf("size of two ints: %zu\n", sizeof(int[2]));
    printf("size of a double: %zu\n", sizeof(double));

    printf("size of uint32_t:  %ld\n", sizeof(uint32_t));
    printf("size of uint64_t:  %ld\n", sizeof(uint64_t));
    printf("size of size_t  %ld\n", sizeof(size_t));
}

