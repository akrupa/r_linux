#include <stdio.h>

int proba(int,int,int);

int main()
{
    int i;
    printf("%d",proba(2,3));
    return 0;
}

int proba(int a, int b)
{
    printf("%d %d",a,b);
    return 1;
}
