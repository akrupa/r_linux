#include <stdio.h>


int kot()
{
printf("ala ma kota");
return 0;
}

int main()
{
int (*fun)();
fun=kot;
fun();
return 0;
}
