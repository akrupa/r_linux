#include <stdio.h>
#include <stdlib.h>
		
int main()
{
    int t[10][10];
    int **t1=(void *)t;
    t[1][1]=5;
    t1[2][2]=4;
printf("%d %d",t1[1][1], t[2][2]);
return 0;
}
