#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <string.h>

int main(int argc, char** argv) {

    printf("argc: %d\n", argc ) ;

    if (2==argc) {

        char* option= *(argv+1);

        printf("%s\n", option );

        if (!strcmp(option, "option_1") ) {
        } else if (!strcmp(option, "option_2")) {
        } else if (!strcmp(option, "option_3")) {
        } else {
        }
    }
    return 0;
}
