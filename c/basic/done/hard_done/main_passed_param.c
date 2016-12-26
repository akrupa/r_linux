#include <stdio.h>

int main(int arg, char** argv)
{
    int i;
    printf("Amount of argument: %d\n", arg );

    for (i=1;i<arg;i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}


