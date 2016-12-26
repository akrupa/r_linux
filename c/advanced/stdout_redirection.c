#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main()
{
    int fd[2];
    pipe(fd);

    if (fork() == 0)
    {
       dup2(fd[1], 1);
       dup2(fd[1], 2);
       close(fd[1]);
       sleep(5);
       fprintf(stdout,"message\n");
       sleep(5);
       fprintf(stdout,"bbbbbbb\n");
       sleep(5);
       fprintf(stdout,"ccccccc\n");

    }
    else
    {
        printf("aaaaaaaaaaaaaa\n");
        char buffer[1024];
        memset(buffer, '\0', 1024);
        close(fd[1]);

        while (read(fd[0], buffer, sizeof(buffer)) != 0)
        {
        }
        fprintf(stdout, "buffor: %s\n", buffer);
    }

    return 0;
};
