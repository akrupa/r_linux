#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_THREADS     5

//a
void *PrintHello(void *threadid)
{
   long tid;
   tid = (long)threadid;
   printf("Hello World! It's me, thread #%ld!\n", tid);
   pthread_exit(NULL);
   printf("This message will be never show!!!");
}

int main (int argc, char *argv[]) {

   pthread_t threads[NUM_THREADS];
   printf("START\n");
   int rc;
   long t;
   for(t=0; t<NUM_THREADS; t++){
      printf("\nIn main: creating thread %ld\n", t);
      rc = pthread_create(&threads[t], NULL, PrintHello, (void *)t);
      if (rc){
         printf("ERROR; return code from pthread_create() is %d\n", rc);
         exit(-1);
      }
      printf("END FOR: %ld \n", t);
   }

   /* Last thing that main() should do */
   printf("--------------------------------- MAIN END\n");
   pthread_exit(NULL);
}

