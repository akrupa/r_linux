#include <stdio.h>


int main()
{
char t[100]="ala ma kota";
t[11]='\x61';
t[6]='\v';
printf("%s",t);
return 0;
}
