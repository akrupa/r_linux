#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

//  1. pointer +/- integer = pointer 
void pointer_integer()
{
   printf("\n\nSTART TEST: %s\n", __FUNCTION__);
   printf("* pointer -/+ integer (moving pinter about size of value of pointer) => pointer\n");
   // think why we used sizeof()
   int* p;
   int *g;
   unsigned long int vp = (unsigned long int)p;
   printf("The value of address p   is == %lx; p   <=> vp\n", vp); 
   printf("The value of address p+3 is == %lx; p+3 <=> vp +3*sizeof(*p)\n", vp+3*sizeof(*p));
   //  The value of address will be increased by 12 
   // move pointer of 3 
   if ((unsigned long int) (p+3) != vp+3*sizeof(*p))
   {
       printf("BUG test-----------------------------------\n"); 
   }     
}

//  2. pointer - pointer = integer
//  It is amount of movement
void pointer_pointer()
{
     printf("\n\nSTART TEST: %s\n", __FUNCTION__);
     printf("* pinter - pointer => integer \n");
     int i;
     int r = 4;
     int l = r-1;
     int p[r];
     unsigned long int vp = (unsigned long int) p;
     unsigned long int vp_i;
     for (i=0; i<r; ++i)
     {       
         vp_i = (unsigned long int) (p+i);
         printf("p+%d <=> vp+%d*sizeof(*p) <=> vp+%02ld <=> %p;" ,i , i, i*sizeof(*p), p+i);
         printf(" (p+%ld)-p <=> %ld <=> (vp+i*sizeof(*p)-vp)/sizeof(*p) <=> (i*szieof(*p))/sizeof(*p)) <=> (%d*%zu)/%zu\n"
               ,(p+i)-p, (p+i)-p, i,sizeof(*p), sizeof(*p));

         if ((p+i)-p  != (vp_i-vp)/ sizeof(*p))
         {
             printf("BUG");
         }
     }
}

void pointer_size()
{
    printf("\n\nSTART TEST: %s\n", __FUNCTION__);
    int i = 0;
    int r = 7;
    int last = r-1;
    char c;
    char* p;
    char** p2;
    printf("c => char\n");
    printf("p => char*\n");
    printf("p2 => char**\n");
    printf("sizeof(char)  == %zu == sizeof(*p ) == %zu\n", sizeof(c), sizeof(*p));
    printf("sizeof(p)     == %zu == sizeof(*p2) == %zu\n", sizeof(p), sizeof(*p2));
    printf("sizeof(p2)    == %zu\n", sizeof(p2));

    struct s 
    {
       char a;
       char b;
    };


    struct s a;
    struct s* ap;
    struct s** ap2;
    printf("It is analogy e.g , instead of int I used strcut s");
    printf("\n\nsizeof(struct s) = %zu\n", sizeof(struct s)); // size of struct
    printf("sizeof(ap)    = %zu\n", sizeof(ap));  // size of pointer
    printf("sizeof(*ap)   = %zu\n", sizeof(*ap)); // size of struct which is contain in pointer
    printf("sizeof(ap2)   = %zu\n", sizeof(ap2)); // size of pointer
    printf("sizeof(*ap2)  = %zu\n", sizeof(*ap2)); // size of pinter 
}

int main()
{
    printf("START %s\n", __FUNCTION__);

    pointer_integer();
    pointer_pointer();
    pointer_size();
    return 0;
}
