#include <stdio.h>
#include "a.h"

int main() {
    printf("-------------- Main start\n");

    set(3); // we set variable included to a.c from a.h
    zm = 2; // Variable was included from a.h

    // ERROR we have too instanse of
    printf("zm: %d\n", get());
    printf("zm: %d\n", zm);
    return 0;
}


