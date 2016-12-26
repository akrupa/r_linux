#include <stdio.h>


int main()
{
int i=5;
int *j=&i;
int **k=&j;

printf("%d ,  %d , %d",i,*j,**k);
printf("\n%d , %p , %p",i,*j,**k);
return 0;
}
