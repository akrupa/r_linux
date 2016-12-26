#include <stdio.h>

int main()
{
int tab[10]; //staly wskaznik
const int tab2[10];//staly wskaznik na stala
const int * a=tab; //wskaznik na stala
int const *  b=tab; //wskaznik na stal
int * const c=tab;// staly wskaznik
const int * const d=tab; //staly wskaznik na stal
int * e;

const int i=8;
printf("\ni: adres %p, war: %d ",&i,i);
int const *t=&i;

// *t =2; konst zabrania tego wyrazenia
int *t2= (int*)t; // musi byc (int*) innaczej nie chce sie skompilowac
*t2 =6;
printf("\ni: adres %p, war: %d ",&i,i);
printf("\nt: adres %p, war: %d ",t,*t);
printf("\nt2: adres %p, war: %d ",t2,*t2);

printf("\n");
}
