#include <stdio.h>

int main() {
   const char* file="a.txt";

   if (0 == remove(file))
   {
      printf("File was removed: %s\n", file);
   }
   else
   {
      printf("ERROR: Filed was not removed: %s \n", file);

   }

   return 0;
}
