#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    printf("Apend file\n");
    char *toAppend="BB\n";


    FILE *f = fopen("tmp_file.txt", "a");
    if (NULL == f)
    {
        printf("Can't open file to write!");
    }

    if (fseek(f, 0 ,SEEK_END)  !=0)
    {
        printf("ERROR: SEEK_END\n");
        return -1;
    }

    fwrite(toAppend,sizeof(char),strlen(toAppend), f);

    return 0;
}
