#include <stdio.h>
#include <stdlib.h>

int main() {
    printf(" Print environment variable from system \nPWD: %s \n", getenv("PWD"));
    return 0;
}
