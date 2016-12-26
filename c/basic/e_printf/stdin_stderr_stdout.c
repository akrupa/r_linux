#include <stdio.h>


int main()
{
int i;
fprintf(stdout,"Please give number.\n");
fprintf(stderr,"Only number\n");
fscanf(stdin,"you passed number  number %d\n",&i);
return 0;
}
