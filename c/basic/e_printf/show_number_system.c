#include <stdio.h>


int main() {
    printf("Important number systens.\n");

    int a=15*16+14;
    long int b=15*16+14;
// Decimal number system
    printf("Decimal: %d\n", a);
// Binary number system
    printf("For binary we must create own function!\n");
// Octal number system
    printf("Octal: %o \n", a);
// Hexadecimal number system
    printf("Hexadecimal small leters: %x\n", a);
    printf("Hexadecimal big letters: %X\n", a); // big leter
    printf("long Hexadecimal: %lx\n", b);
    printf("long Hexadecimal: %lx\n", b*(-1));
    return 0;
}
