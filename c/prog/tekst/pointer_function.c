#include <stdio.h>


int kot()
{
printf("ala ma kota");
return 0;
}


int kot2(int c, int d)
{
printf("ala ma kota");
return 0;
}

typedef int (*funkcja)();

int kot3()
{
printf("ala ma kota");
return 0;
}



int main()
{
int (*fun)();
fun=kot;
fun();

int (*fun2)(int a, int b); 
fun2=kot2;
fun2(2,3);


funkcja fun3;
fun=kot;
fun();

return 0;
}
