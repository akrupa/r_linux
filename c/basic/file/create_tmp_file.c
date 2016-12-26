#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void stopProgram(int time)
{

    for (int i=0; i < time;++i) {
        printf("%d, ", i);
        fflush(stdout);
        sleep(1);
    }
    printf("\n");
}

int main()
{
    char template[] = "./aaa-XXXXXX";
    int fd;
    fd = mkstemp(template);
    close(fd);
    printf("mkstemp() = %s\n", template);
    FILE *fa=fopen(template, "wrb");

    if (NULL == fa) {
        printf("ERROR: Cannot open the file!");
    }
    unlink(template);
    stopProgram(5);
    //
    FILE *f_unlink=fopen(template, "rwb"); // if we use this line, then function unlinked is abandon.
    if (NULL == f_unlink) {
        printf("ERROR: Cannot open the unlink file!");
    }
      //  fwrite("abcd\n", sizeof(char), 5, f_unlink);
    stopProgram(10);
    fclose(f_unlink);
    fclose(fa);

    printf("\n");
    return 0;
}
