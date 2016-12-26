#include <stdio.h>

int fun(int *t,int i,double d, int tab2[])
{
   int tab3[20];
    printf("%d %d %d %d %d",sizeof(t),sizeof(i), sizeof(d),sizeof(tab2),sizeof(tab3));
}

main()
{
int tab[20];
int i=6858;
fun(tab,i,423.32, tab);
return 0;
}
