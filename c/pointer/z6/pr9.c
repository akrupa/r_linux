#include <stdio.h>

int * f1()
{
    int tab[10];
    int i;
    for(i=0;i<10;i++)
      tab[i]=i*10;
    return tab;
}

int main()
{
    int *t=f1();
    //f2();
    int z =  *(t+3);
    int k =  *(t+3);
    printf("%d t[6]\n",t[6]);
    printf("%d k\n",k);
    printf("%d z\n",z);
    
    printf("%d z\n",z);
    printf("%d z\n",z);
    printf("%d t[6]\n",t[6]);
    printf("%d z\n",z);


}
