#include <stdio.h>
#include <tomcrypt.h>
#include <inttypes.h>

// Dwie cyfry w systemie szesnastkowym opisują zawartosc jednego bajtu
// sudo apt-get install libtomcrypt-dev
// gcc md5.c -ltomcrypt
// md5sum - compute and check SHA256 message digest
// If we want create for sha1 it is similarly

int main()
{
    printf("-------- main -------\n");
    FILE* f = fopen("b.txt", "rb");

    int size_md5 = 16;
    uint8_t value_md5[size_md5];

    int toRead = 8192;
    int read = 0;
    uint8_t t[toRead];

    hash_state hs;

    if (CRYPT_OK != md5_init(&hs))
    {
        printf("EEEEEE Init failed\n");
        return -1;
    }

    while (1)
    {
        read = fread(t, sizeof(uint8_t), toRead, f);
        if (ferror(f))
        {
            printf("EEEEEE Operation on file failed!\n");
            return -1;
        }

        if (CRYPT_OK != md5_process(&hs, t, read))
        {
           printf("EEEEEE md5_process failed\n");
           return -1;
        }

        if (feof(f))
        {
           break;
        }
    }

    if  (CRYPT_OK != md5_done(&hs, value_md5))
    {
        printf("EEEEEE md5_done failed\n");
        return -1;
    }

    for (int i=0; i < size_md5; ++i)
    {
         printf("\n%02d :", i);
        // printf("%02x", value_md5[i]);
    }
    printf("\n");

    return 0;
}


