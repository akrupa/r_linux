//#include <stdlib.h>
#define roz  10

int main()
{
int i;
int j;
int **tab=malloc(roz*sizeof(*tab));
*tab=malloc(roz*roz*sizeof(**tab));
for(i=1;i<roz;i++)
  tab[i]=tab[0]+(roz*i);

for(i=0;i<roz; ++i) for(j=0; j<roz;++j) *(*(tab+i)+j)=i*10+j;
//for(i=1;i<100;++i) printf("\n%d",*(tab+i)); // wyswietli co dziesiaty adres
//for(i=1;i<100;++i) printf("\n%d",*tab+i);// wyswietli adresy
for(i=1;i<100;++i) printf("\n%d",*(*tab+i)); // wyswietli poprawnie
for(i=1;i<100;++i) printf("\n%d",**tab+i); // wyswietli poprawnie
printf("----------------------------");
//for(i=0;i<roz; ++i) for(j=0; j<roz;++j) printf("\n%d", tab[i][j] );



}




