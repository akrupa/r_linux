#include <stdio.h>

// we take all prepocessor commend form stdio.h !!!
// the name of create comments have to be uniq!!!


#define HELLO printf("Hello World\n");

int i;
#define new_line(zm) for(i=0;i<zm;++i) \
    printf("\n");
int main() {

    printf("File name (path from exexciute directory ): %s\n", __FILE__);
    printf("Function name: %s\n", __FUNCTION__);
    printf("Current line in file: %d\n", __LINE__);
    printf("Current date: %s\n", __DATE__);
    printf("Current time: %s\n", __TIME__);



    new_line(2)

    printf("Run command HELLO => ");
    HELLO


    new_line(3)
    printf("######### FLOW CONTROL ###########\n");

    printf("Command  #ifdef HELLO => ");

    #ifdef HELLO
       printf("exist.\n"); // execute
    #else
       printf("not  exist!!!\n");
    #endif

    printf("Command  #ifndef HELLO ");
    #ifndef HELLO
       printf("exist. \n"); // execute
    #else
       printf("not exists!!!\n");
    #endif

    printf("Run command #undef HELLO <=> command HELLO is removed.\n");
    #undef HELLO
    // HELLO  // we recieved  error: ‘HELLO’ undeclared (first use in this function)


    #define a 3

    #if a == 3
       // it is true
    #else
       // it is false
    #endif

    int zm=3;
    printf("sign '#' is reference to the name of function\n");
    #define show_name(x) printf("%s=%i\n", #x, x);
    printf("e.g. we declarate: int zm=3. We get ");
    show_name(zm)

    printf("We can concatenat to array of char using two hash  (##).\n");
    #define concatenate(a,b)  a ## b
    int prefix=1;
    int suffix=2;
    int concatenate(prefix, suffix) =3; // declaration of variable prefixsuffix
    show_name(prefixsuffix)

    printf("We can create type of massage: warning, error.\n");

    #warning "It is some message warrning  whereas compilation.\n"
   // #error  "If this line will be execute than compliation will be break out"

    printf("command #line change automatic counting line");
    #line 3 // Now we are in thirst line of code.

    return 0;
}
