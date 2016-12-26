#include <stdio.h>
#include <string.h>


int main(int argc, char* argv) {
    printf("------------ extract from file\n");

    FILE* f = fopen("f.txt", "r"); 
    if (NULL == f)
    {
        printf("ERROR: Cannot open file");
    }

    char a[4];
    memset(a,'\0',4);

    fseek(f,2,SEEK_SET);
    fread(a, sizeof(char), 3 ,f);


    printf("Readed: %s\n", a);


}



