#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>


int main()
{
    struct stat st = {0};

    if (stat("./abcdef", &st) == -1) {
        mkdir("./abcdef", S_IRWXU);
    }
    return -1;
}
