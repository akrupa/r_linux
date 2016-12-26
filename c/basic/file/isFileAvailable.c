#include <stdio.h>
#include <unistd.h>
int exist_stdio(const char *file_name)
{
    FILE *file = fopen(file_name, "rb");
    if (NULL == file)
    {
        fclose(file);
        return 1;
    }
    return 0;
}

int exist_unitstd(const char *file_name)
{
    if(access(file_name, F_OK ) == 0 ) {
        return 0;
    } else {
        // file doesn't exist
        return -1;
    }

}
int main()
{
    return 0;
}
