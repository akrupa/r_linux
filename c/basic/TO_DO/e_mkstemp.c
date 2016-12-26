#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
    char tempName[1024];
    memset(tempName, 0x00, 1024);
    strncpy(tempName,"myTmpFile-XXXXXX",16);
    // create unique name of file
    // if d >  open descriptor
    int d = mkstemp(tempName);

    close(d); // close descriptor
    return 0;
}
