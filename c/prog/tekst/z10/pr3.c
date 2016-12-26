#include <stdio.h>

typedef int (*funkcja)();

int kot()
{
printf("ala ma kota");
return 0;
}

int main()
{
funkcja fun;
fun=kot;
fun();
return 0;
}
