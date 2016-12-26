#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int *t=malloc(10*sizeof(int));
    int *p=t;
    t[0]=0;
    p[0]=0;
    *p=0;
    p++;
    t[1]=1;
    p[0]=1;
    *p=1;
    *(t+1)=1;
    int a;
    int b;
    while(p-t<10)
    {
        printf("%d %d %d\n",p,t, (p-t)); 
        a=p-t;
        printf(" a %d a \n",a);
        *p=p-t;
        p++;
  }
  for(i=0;i<10;i++)
  //  printf("%d\n",t[i]);
return 0;
}
