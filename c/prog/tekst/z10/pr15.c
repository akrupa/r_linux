#include <stdio.h>
#include <strings.h>


int main()
{
char *a="ala";
char *b="ala ma kota";
char *c="bla";
printf("%d %d %d %d",strcmp(a,c),strcmp(c,a),strcmp(a,b),strncmp(a,b,3));
return 0;
}
