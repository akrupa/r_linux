//#include <stdlib.h>
#define roz  10

int main()
{
int i;
int j;
int **tab=malloc(roz*sizeof(*tab));
*tab=malloc(100*sizeof(**tab));
for(i=1;i<roz;i++) *(tab+i)= *tab +(roz*i);// jest to bardzow wazne

//for(i=1;i<roz;i++) tab[i]=tab[1]+(roz*i);

//for(i=0;i<roz; ++i) for(j=0; j<roz;++j) *(*(tab+i)+j)=i*10+j;
**tab= 10;
**(tab+1)= 11;
**(tab+8)= 90;

for(i=0;i<100;++i) *((*tab)+i)= i*100;

printf("-------------------------------------------------------------wyswietlanie\n");
 for(i=1;i<100;++i) printf("\n%d",*(*tab+i));
//for(i=0;i<100;++i) printf("\n%d",**(tab+i));

printf("-------------------------------------------------------------------------------------------");
//for(i=0;i<roz; ++i) for(j=0; j<roz;++j) printf("\n%d", tab[i][j] );
for(i=0;i<roz; ++i) for(j=0; j<roz;++j) printf("\n%d", *(*(tab+i)+j) );



}




