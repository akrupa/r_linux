#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *tab=malloc(10* sizeof(int));
    int i;
    for (i=0;i<10;i++)
    {
        tab[i]=i;
    }
    printf("\n");
    for (i=0;i<10;++i) printf("\n %d",*(tab+i)); 
    for (i=0;i<10;++i) printf("\n%p %d",tab+i,*(tab+i)); 

    printf("\n");

    char* p;
    int* integer;
    printf("aa %zu\n", sizeof(char));
    printf("aa %zu\n", sizeof(p));
    printf("aa %zu\n", sizeof(int));
    printf("aa %zu\n", sizeof(integer));
//for (i=0;i<10;++i) printf("\n %d",tab+1); 
//for (i=0;i<10;++i) printf("\n %p ",tab+1); 
//for (i=0;i<10;++i) printf("\n %d",tab+1); 
}
