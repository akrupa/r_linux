#include <stdio.h>

union ble{
int i;
float f;
};

int main()
{
union ble b,c;
b.f=3.45;
printf("%d %f\n",b.i,b.f);
b.i=-234;
printf("%d %f\n",b.i,b.f);
c=b;
printf("%d %f\n",c.i,c.f);
}
