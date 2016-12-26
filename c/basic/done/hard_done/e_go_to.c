#include <stdio.h>

int main()
{
    int i=2;

////////////////////////////////  while
my_while:
   if (i==0)
   {
       goto my_while_end;
   }

   printf("while\n");
   printf("index i: %d\n", i);
   i--;

goto my_while;
my_while_end: //WARNING:  After this line mast appear at least one statment.
/////////////////////////////////// end while


// if (0) {
goto koniec; // skok do etykiety koniec
     printf("will never show!!");
koniec:
//} don't allow

return 0;
}
