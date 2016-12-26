#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int _lengthRandomChar = 16;


void init_random() {
  srand (time(NULL));
}

char* getRandomChar() {

    char* r = malloc(_lengthRandomChar);
    if (!r) {
        printf("Memory allocation failure!");
    }

    for (int i=0; i<_lengthRandomChar; ++i) {
        *(r+i) = rand()%255+ 1;
    }
    return r;
}

int main() {
  init_random();
  printf("%s\n", getRandomChar());
  printf("%s\n", getRandomChar());
    return 0;
}



