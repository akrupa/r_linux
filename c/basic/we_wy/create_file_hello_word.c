#include <stdio.h>
#include <stdlib.h>



int main () {

    FILE *fp; /* używamy metody wysokopoziomowej - musimy mieć zatem identyfikator pliku, uwaga na gwiazdkę! */
    char tekst[] = "Hello world Andrzej";
    if ((fp=fopen("hello_word.txt", "w"))==NULL) {
        printf ("Nie mogę otworzyć pliku do zapisu!\n");
        exit(1);
    }
    fprintf (fp, "%s", tekst); /* zapisz nasz łańcuch do pliku */
    fclose (fp); /* zamknij plik */
  return 0;
}
