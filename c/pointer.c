#include <stdio.h>
#include <stdlib.h>


// &<variable|pointer|function> -- it is operator to call address
// *<variable>  --  get value of variable
void f1()
{
    int value=5;
    // pointer to variable 'value'
    // pointer p contain address to variable value
    int* p = &value;
    // // pointer p2 conatin address to variable p2 which
    // int* p2 = (int*) &p; // error: memory size of integer is less than pointer

    int **p2 = malloc(sizeof(int*));
    *p2 = p;
    printf("-- %p %p %p \n", p, *p2, p2);
    int ***p3 = malloc(sizeof(int**));
    *p3 = p2;
    printf("-- %p %p \n", *p3, **p3);

    int **p3_b = malloc(sizeof(int*));
    *p3_b = (int*) p2;
    printf("-- %p %p %p \n", p3_b, *p3_b, *((int**) *p3_b));

    printf("%d %d %d %d %d \n", value,*p, **p2, ***p3, **((int**) *p3_b));
}


int main()
{
    printf("--------------- POINTER ---------\n");
    f1();

    return 0;
}
