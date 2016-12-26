#include <stdio.h>
#include <stdlib.h>
		
int main()
{
int t[10][10];
int *t1=(void *)t;
t[9][9]=-1234;
t1[0]=4321;
printf("%d %d",t1[99], t[0][0]);
return 0;
}
