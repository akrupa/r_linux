#include <stdio.h>
#include <strings.h>


int main()
{
char a[]="ala ma kota";
char b[]="a kot ma ale";
char *c,*d;
c=a;
d=b;
if (c==d) printf("wskazniki rowne\n"); else printf("wskazniki rozne\n");
if (!strncmp(c,d,1)) printf("napisy takie same\n"); else printf("napisy rozne");
return 0;
}
