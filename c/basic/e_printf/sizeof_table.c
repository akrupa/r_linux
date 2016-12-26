#include <stdio.h>
#include <stdlib.h>


int main() {

   char* t[]= { "1", "2",  "3", "4"};
   printf("rozmiar tablicy %ld \n", sizeof(t));
   char** t2= malloc(3*sizeof(char*));
   printf("rozmiar tablicy %ld \n", sizeof(t2)); // Show only score for one char*
   char* t3= malloc(3*sizeof(char));
   printf("rozmiar tablicy %ld \n", sizeof(t3)); // Show only score for one char*
}



