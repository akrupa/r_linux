#include <stdio.h>

int main()
{
    int i;
    int **t=malloc(10*sizeof(int *));

    for (i=0;i<10;i++)
    {
        t[i]=malloc(10*sizeof(int));
    }
    int j =0;

    for (i=0;i<10;++i)
    {
        for(j=0;j<10;++j) t[i][j]=10*i+j;
    }
//for(i=0;i<10;++i) for(j=0;j<10;++j) *(*(t+i)+j)=10*i+j; 
//printf("%d",t[1][0]);
for(i=0;i<203;++i) printf("\n%p %d %d", t+i, t+i,*(t+i));
printf("\n----------------------------------------------------------------------------\n");
for(i=0;i<203;++i) printf("\n%p %d",t+i,*(*t+i));


// wyswietlenie tablicy, dwa razy to samo
printf("wyswietlanie tablicy ----------------------------------------------");
//for(i=0;i<10;++i) for(j=0;j<10;++j) printf("\n%d",t[i][j]);
//for(i=0;i<10;++i) for(j=0;j<10;++j) printf("\n%d", *(*(t+i)+j)  );

} // main

