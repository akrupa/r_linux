

/***************************************************
What is a different between declaration?
****************************************************/
char* a = "abc";  //declared as  string constant,
char  b[] = "abc";//declared as a character array.
//   *(a+1) = 'g'; Segmentation fault (core dumped)


/////////////////////  What is a different between header <inttypes.h> and <stdint.h>?
// In both case we can use type e.g. uint8_t
// but only heeader <inittypes.h>  allow to use macro PRIu64_t


 printf("%s\n", PRIu64); // llu or lu


const void *ptr  --- nie wolno rzutować na FILE*
