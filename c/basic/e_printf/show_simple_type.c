#include <stdio.h>

// wiki C data types

// size is depending of system
// i or d -- I don't see the diffrent

int main() {

/////////////////// 
                   int s_int=-1;
          unsigned int u_int=-1;
                  long s_long=-1;
         unsigned long u_long=-1;
              long int s_long_int=-1; // It's same as  long
     unsigned long int u_long_int=-1; // it's same as long int
             long long s_long_long=-1;
    unsigned long long u_long_long=-1;
         long long int s_long_long_int=-1; // it's same as long_long
unsigned long long int u_long_long_int=-1; // it's same as unsigned long long 


printf("int = -1,  %d   %%d  size:%lu \n", s_int, sizeof(int) );
printf("unsigned int = -1 : %u %%u size:%lu  \n", u_int, sizeof(unsigned int));
printf("long = -1  : %ld  %%ld  size:%lu \n",s_long, sizeof(long));
printf("unsigned long = -1 : %lu %%lu  size:%lu \n", u_long, sizeof(unsigned long));
printf("long int =-1 : %li  %%li  size: %lu \n", s_long_int, sizeof(long int) );
printf("unsigned long int =-1 : %lu %%lu size:%lu \n", u_long_int, sizeof(unsigned long int));
printf("long long = -1 : %lld %%lld  sise: %lu  \n",   s_long_long, sizeof(long long));
printf("unsing long long =-1 : %llu %%lld size:%lu \n", u_long_long, sizeof(unsigned long long));
printf("long long int = -1 : %lld %%lld  size:%lu \n", s_long_long_int, sizeof(long long int));
printf("unsing long long int =-1 : %llu %%llu size:%lu \n", u_long_long_int, sizeof(unsigned long long int));

float s_float=-1;
double s_double=-1;
long double s_long_double=-1;

printf("float -1, %f, %%f  size:%lu \n", s_float, sizeof(float));
printf("double -1, %lf, %%lf  size:%lu \n", s_double, sizeof(double));
printf("long double -1 %Lf, %%LF  size:%lu \n", s_long_double, sizeof(long double)); // not used in MINGW 

/////////////// size_t

size_t  z_size_t=-1;
ssize_t z_ssize_t=-1 ;

printf("size_t =-1; %zu, %%zu  size:%lu \n", z_size_t, sizeof(size_t));
printf("size_t =-1; %zd, %%zd \n" , z_size_t);
printf("size_t =-1; %%zxhex: %zx\n" , z_size_t);
printf("ssize_t =-1; %zu, %%zu size:%lu \n", z_ssize_t, sizeof(ssize_t));

char* z_char_p ="aa";
char  z_char= 'a';
printf("---------------- char: %ld %ld  \n", sizeof(char), sizeof(char*));

return 0;
}

