#include <stdio.h>

int main()
{
int i;
int **t=malloc(4*sizeof(int *));
for(i=0;i<4;i++)
    t[i]=malloc((i+2)*sizeof(int));
    t[1][0]=5;
    printf("-----%d\n",t[1][0]);
}
