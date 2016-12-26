#include <stdio.h>
#include <stdlib.h>

void a_type(int a) {


}
/*
void a_type(float a) {

}
*/

int main() {

    void* a;

    int *a_int = malloc(sizeof(int));
    *a_int = 3;

    float *a_float = malloc(sizeof(float)) ;
    *a_float = 4.44;

    a= a_int;
    printf( "%d\n", *((int*) a));

    a= a_float;
    printf( "%f\n", *((float*) a));

    float bb= *a;
    free(a);
    return 0;
}
