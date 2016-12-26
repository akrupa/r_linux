#include <stdio.h>
#include <strings.h>


int main()
{
char *a="ala";
char *b="ala ma kota";
if (!strncmp(a,b,3)) printf("rowne"); else printf("rozne");
return 0;
}
