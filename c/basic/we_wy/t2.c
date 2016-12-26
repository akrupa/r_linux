#include <stdio.h>

FILE * plik(char tab[]) {
return fopen(tab, "rt");
 
}

int main() {



FILE * f;
f = plik("t2.c");
char slowo[100];
while (fscanf(f,"%s", slowo)>0) {

fprintf(stdout," %s", slowo);
	if (slowo[strlen(slowo)-1]==';' || slowo[strlen(slowo)-1]== '{')  {
		printf("\n");
	} else {
	//	printf("\n %c", slowo[strlen(slowo)-1]);
	}
}


fclose(f);

return 0;
}
