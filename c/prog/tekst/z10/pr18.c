#include <stdio.h>
#include <strings.h>


int main()
{
char a[100]="ala ma kota";
char b[100]="a kot ma ale";
char *c,*d;
c=a;
d=b;
if (c==d) printf("wskazniki rowne\n"); else printf("wskazniki rozne\n");
if (!strcmp(c,d)) printf("napisy takie same\n"); else printf("napisy rozne");
c[12]='k';
strncpy(c,d,12);
printf(c);
if (c==d) printf("wskazniki rowne\n"); else printf("wskazniki rozne\n");
if (!strcmp(c,d)) printf("napisy takie same\n"); else printf("napisy rozne");
return 0;
}
