#include <stdio.h>
#include <strings.h>


int main()
{
char a[100]="ala ma kota";
char b[100]=" a kot ma ale";
char *c,*d;
c=a;
d=b;
if (c==d) printf("wskazniki rowne\n"); else printf("wskazniki rozne\n");
if (!strcmp(c,d)) printf("napisy takie same\n"); else printf("napisy rozne");
strncat(c,d,5);
if (c==d) printf("wskazniki rowne\n"); else printf("wskazniki rozne\n");
if (!strcmp(c,d)) printf("napisy takie same\n"); else printf("napisy rozne");
printf("%s",c);
return 0;
}