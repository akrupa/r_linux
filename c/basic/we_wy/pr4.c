#include <stdio.h>

int main()
{
FILE *plik;
int i;
plik=fopen("proba.txt","r");
fscanf(plik,"%d",&i);
printf("%d",i);
fscanf(plik,"%d",&i);
printf("%d",i);
fclose(plik);
return 0;
}
