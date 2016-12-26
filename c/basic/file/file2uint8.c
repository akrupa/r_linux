#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <inttypes.h>

uint8_t* fileToUint8(FILE* f, size_t*  wasRead)
{
    int bufSize = 4096;
    *wasRead =0;
    size_t read =0;
    uint8_t*  buffer=NULL;
    uint8_t buf[bufSize];
    uint8_t* t;

    while (0 !=  (read = fread(buf, sizeof(uint8_t), bufSize,f)))
    {
        t = (uint8_t*) realloc(buffer, *wasRead+read);
        buffer = t;
        t = buffer+ *wasRead;
        memcpy(t,buf,read);
        *wasRead +=read;
    }

    return buffer;
}

int main()
{
    uint8_t* buffer = NULL;
    size_t bufferSize;
    buffer =   fileToUint8(stdin, &bufferSize);
    fwrite(buffer, sizeof(uint8_t), bufferSize, stdout);
    free(buffer);
    return 0;
}
