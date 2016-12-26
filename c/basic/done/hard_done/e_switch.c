#include <stdio.h>

int main()
{
    int i;
    printf("podaj i:  ");
    scanf("%d", &i);

    switch (i)
    {
        case 1: printf("i=1\n");         // what happen if we will pass 1?
        case 2: printf("i=2\n"); break;
        case 3: printf("i=3\n"); break;
        default: printf("i jest rozne od 1, 2 i 3");
    }

    return 0;
}



