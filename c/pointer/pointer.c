#include <stdio.h>
#include <stdlib.h>


// &<variable|pointer|function> -- it is operator to call address
// *<variable>  --  get value of variable
void simple_operation()
{
    int i=5;
    int *j=&i;
    int **k=&j;
// TO_DO: We check memory
// TO_DO: deallocated memory 

    int value=5;  // pointer to variable 'value'
    int* p = &value; // pointer p contain address to variable value
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

void changeConst()
{
     printf("TEST: %s\n\n", __FUNCTION__);
     const int a= 1;
     *((int*) &a) = 2;
     if (2 != a) 
     {
         printf("BUG: Const varaible wasn't changed");
     }
}


int main()
{
    printf("--------------- POINTER ---------\n");
    simple_operation();
    changeConst();
    int tab[10]; //staly wskaznik
    const int tab2[10];//staly wskaznik na stala
    const int * a=tab; //wskaznik na stala
    int const *  b=tab; //wskaznik na stal
    int * const c=tab;// staly wskaznik
    const int * const d=tab; //staly wskaznik na stal

    return 0;
}


