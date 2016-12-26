#include <stdio.h>

int main()
{
const int i=134;
int *g= (int*)(&i);
int *a= (int*)g; // <=> int *a= g;   jezeli chcemy zmienic stala to jest roznica
//int *a=(void*)(&i);
printf("\na: adres %p, war: %d ",*a,*a);
*a=2;
printf("%d *a\n",*a);
printf("%d i\n",i);

printf("adres *a %p\n",*a);
printf("adres  i %p\n",i);
printf("adres  *(int *)(&i): %p",*(int *)(&i));
//*(int*)(&i)=7;
//printf("\n%d\n",i);


int *a2=(int*)a; //musi byc inicjalizacja
//*a2 =*g;
printf("\nadres %p, war: %d ",*a2,*a2);

*a2 = 10;
printf("\na2: adres %p, war: %d ",*a2,*a2);
printf("\na: adres %p, war: %d ",*a,*a);
printf("\nadres  *(int *)(&i): %p, war: %d",*(int *)(&i),i);

printf("\n i: %p, i: %d",i,i);
printf("\n & i : %p, : %d",&i,&i);
printf("\n (int *)i  : %p, : %d", (int *)i,(int *)i);
printf("\n (int *)(&i) : %p, : %d", (int *)(&i),(int *)(&i));
printf("\n *(int *)(&i): %p, war: %d",*(int *)(&i),*(int *)(&i));

printf("\n g %%p *g %%d  : %p, : %d", g,*g);

printf("\n");
return 0;
}
