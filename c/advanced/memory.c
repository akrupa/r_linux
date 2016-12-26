#include <stdio.h>
#include <stdint.h>


void update(uint64_t size, uint64_t* a) {

    *a=0;
    *a=size;

}

typedef struct struct_a {
   uint32_t p;
   uint32_t c;
   uint32_t k;
} struct_a;


int main()
{
    printf("--------- Main \n");
struct_a a;

a.p=0;
a.c=0;
a.k=0;


printf("pinter p: %p\n", &a.p);
printf("pinter c: %p\n", &a.c);
printf("pinter k: %p\n", &a.k);

uint64_t v=1024;
v *=16;
v *=16*16+0;
v = v*16*16*16*16 +10;
    update(  v  , &a.c); // zapisujemy zmiany do a.c i a.k

    printf("---------- %zu\n " , v);
    printf("p: %d \n", a.p);
    printf("c: %d \n", a.c);
    printf("k: %d \n", a.k);

    return 0;
}



