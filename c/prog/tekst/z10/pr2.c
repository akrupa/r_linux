#include <stdio.h>

int kot(int c, int d)
{
printf("ala ma kota");
return 0;
}

int main()
{
int (*fun)(int a, int b);
fun=kot;
fun(2,3);
return 0;
}
