#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printMaxValueForSignedInt()
{
    int a = 1;
    a = a << 31; // 0x80 00 00 00 <=> 10000000 00000000 00000000 00000000
    a = ~a;      // 0x7F FF FF FF <=> 01111111 11111111 11111111 11111111
    printf("\n# Max signed int value is: %d\n", a);

    int long long b=1;
    b = b << 63;
    b = ~b;
    printf("\n# Max signed int value is: %lld\n", b);
}

// Modulo for bit, works faster than %
void moduloForBit()
{
    printf("\n# Example modulo:\n");
    int a= 141241;
    printf("%d = 0x%08x\n", a, a);
    printf("%d & 0x0F = %d = %d modulo 16\n", a, a&0x0F, a); // modulo 16
    printf("%d & 0x01 = %d = %d modulo 2 \n", a, a&0x01, a); // modulo 2
}

static char* char2binary(char b)
{
    char* a = malloc(9*sizeof(char));
    memset(a,0,9);
    for (int i=7; i>=0; --i) {
        if ((b&0x01) == 1)
        {
            *(a+i)='1';
        }
        else
        {
            *(a+i)='0';
        }
        b = b >> 1;
    }
    return a;
}
void edu_operationOnBit()
{
#define pokaz(a) printf("  %s\n",char2binary(a));
#define tab(a)  for(int i=0; i<a;++i) printf(" ");

     char a = 163; // 0xA3  <=> 10100011
     char b = 7;  //  0x07 <=> 00000111
     tab(20); pokaz(a)
     tab(20); pokaz(b)
     printf("Operator AND <=> & :");
     pokaz(a&b);
     printf("Operator OR  <=> | :");
     pokaz(a|b);
     printf("Operator XOR <=> ^ :");
     pokaz(a^b);
     printf("Operator not <=> ~ :\n");
     printf(" ~%s  <=> %s \n", char2binary(a), char2binary(~a));
     printf(" ~%s  <=> %s \n", char2binary(b), char2binary(~b));

     printf("Binary LEFT Shift Operator << number bits to move. (a<<n <=> a*(2^n) )\n");
     printf("Binary RIGHT Shift Operator. >> number bits to move (a>>n => a/(2^n) )\n");
     printf( "%s << 2  <=> %s \n", char2binary(a), char2binary(a<<2));
     printf( "%s >> 2  <=> %s \n", char2binary(a), char2binary(a>>2));
     printf( "%s >> 2  <=> %s \n", char2binary(b), char2binary(b>>2));
     printf( "%s << 1  <=> %s \n", char2binary(b), char2binary(b<<1));
     printf("Think what happand with most significant bit!\n");
}
int main() {

    edu_operationOnBit();
    moduloForBit();
    printMaxValueForSignedInt();


    return 0;
}
