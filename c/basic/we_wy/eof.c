#include <stdio.h>

// EOF <=> CTRL+D --- end of file 
// function feof for file
int main(void)
{
  int c;
  while ((c = getchar())!=EOF) {
    if (c==' ') {
      c = '_';
    }
    putchar(c);
  }
  return 0;
}

