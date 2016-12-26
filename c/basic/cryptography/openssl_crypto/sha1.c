#include <stdio.h>
#include <string.h>
#include <openssl/sha.h>
#include <errno.h>
//#include <sha.h>

int main()
{
   unsigned char obuf[20]; // size of sha1
   const unsigned char ibuf[] = "Hello, world";
   int  length_str = strlen( (const char*) ibuf);

   FILE* fw = fopen("hello_data.tmp", "wb");
   if (NULL == fw)
   {
       printf("Cannot open file!\n");
       return -1;
   }

   fwrite(ibuf, sizeof(unsigned char), length_str, fw);
   if (ferror(fw))
   {
       printf("Cannot create tmp data!\n");
       return errno;
   }
   fclose(fw);

   SHA1(ibuf,length_str, obuf);

   for (int i = 0; i < 20; ++i)
   {
       printf("%02x", obuf[i]);
   }
   printf("\n");

    return 0;
}


