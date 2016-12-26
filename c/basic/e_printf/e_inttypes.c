#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    uint64_t foo = 10;
    printf("foo is equal to %" PRIu64 "!\n", foo);

    printf("PRIu64  <#> %s,  \n", PRIu64);

    return 0;
}
