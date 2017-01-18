#include  <stdio.h>
#include <inttypes.h>
#include <string.h>

typedef struct
{
  uint8_t a;
  uint8_t b[8];
} s_a;

typedef struct __attribute__ ((__packed__))
{
  uint8_t a1;
//  uint8_t a3;
//  uint8_t a4;
//  uint8_t a5;
//  uint8_t a6;
//  uint8_t a7;
  uint8_t *b;
} s_b;

int main()
{
   int i;
   int s = sizeof(s_a);
   uint8_t t[s];
   for (i=0; i < s ;++i) t[i] = i+1;
   s_a a;
   s_b b;

   memset(&a, '\0', sizeof(s_a));
   memset(&b, '\0', sizeof(s_b));

   b.b =  (int8_t*)  &b.b;

   printf("z == %zu\n", sizeof(s_a));
   printf("! == %zu\n", sizeof( s_b));

   printf("a %p %p %p\n", &a, &a.b, a.b);
   printf("a %p %p %p\n", &b, &b.b, b.b);



   return 0;
}
