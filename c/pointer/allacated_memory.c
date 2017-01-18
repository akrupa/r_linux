#include <stdio.h>
#include <stdlib.h>


void one_dimension()
{
    int sit[7]; // static integer table
    int* dit = malloc( 7*sizeof(*dit)); // dynamic integer table;
    printf("Static alocation we know size of table using sizeof:  %zu\n", sizeof(sit));
    printf("Dynamic allocation%zu we don't know size of table using sizeof\n", sizeof(dit));
    free(dit);
}

void two_dimensions_static()
{
    int w = 200;
    int k = 500;
    int r = w*k;
    int rs = r*sizeof(int);
    int sit[w][k]; // it is one peace of memmory
    long int a= sizeof(sit);
 
    if (rs != sizeof(sit))
    {
       printf("BUG %d",__LINE__);
       return ;
    }
    // it is sizeof one raw 
    if (rs/sizeof(sit[0]) != w) 
    {
       printf("BUG %d",__LINE__);
       return ;
    }
    // now we have whole information
    int* p = &sit[w-1][k-1];
    int* g = &sit[0][0];
    if (r-1 != p-g)
    {
       printf("bug in my knowledge. %d  <> %ld ", r, p-g );
    }  
}

void two_dimensions_dynamic()
{
    // allocateted memory is not in one pice of memory!!!
    int i = 0;
    int w = 3;
    int k = 5;
    int** t = NULL;

    t = malloc(w*sizeof(int*));
    if (NULL == t)
    {
        printf("Memory allocation failure!");
        return;
    }
    for (i=0; i < w; ++i) *(t+i) = NULL;
    for (i=0; i < w; ++i)
    {
        *(t+i) = malloc(k*sizeof(int));
        if (NULL == *(t+i))
        {
            printf("Memory allocation failure!");
            goto clean_two_dimensions_dynamic;
        } 
    }

    int* p = *t;
    int* g = *(t+w-1) +k;
    // p-g can and probably will be begger than size

    t[w-1][k-1] = 7;

   if (t[w-1][k-1] != *(*(t+w-1)+k-1))
   {
       printf("BUG, line %d\n", __LINE__);
       return;
   }
clean_two_dimensions_dynamic:
  // TO_DO clean memmory
    return;
}

void two_dimensions_dynamic_one_piece()
{
    printf("\n\nSTART: %s\n", __FUNCTION__);
    int i = 0;
    int j = 0;
    int k =5;
    int w = k; //12;
    int r = k*w;
    int **tab;
    tab = malloc(k*sizeof(*tab));

    *tab = malloc(r*sizeof(**tab));

    for (i=1; i < k;++i)
    {
         tab[i] = (int*) tab[0] +(w*i);
    }

    for (i=0; i<k;++i)
    {
        for (j=0; j<w;++j)
        {
              *(*(tab+i)+j) = (i*10)+j;
        }
    }
    for (i=0; i<r; ++i)
    {
        // look carefully on printed pointer  -- we don't get it this addres is belong to us.
        printf("%02d %04ld %p %d \n", i, (i)*sizeof(int) , *tab+i, *(*tab+i) );
        
    }
    for(i=0;i<k; ++i) for(j=0; j<w;++j)  printf("index %02d:  value: %02d\n" , i*k+j , tab[i][j] );
 

    // check if we allocate one piece of memory
    int* p = &tab[w-1][k-1];
    int* g = &tab[0][0];
    if (r-1 != p-g)
    {
       printf("bug in my knowledge. %d  <> %ld ", r, p-g );
    }  
    

}

void examampleOfAccess()
{
    int t[10][10];
    int *t1=(void *)t;
    t[9][9]=-1234;
    t1[0]=4321;
    printf("%d %d",t1[99], t[0][0]);

}

void declareAsConst()
{
     char *a="ala"; // declared as string constant
     char *b="ala";
     //   *(a+1) = 'g'; Segmentation fault (core dumped)
     if (a!=b)
     {
         printf("BUG line:%d; Pointer should be equals", __LINE__ );
     }
     char c[] = "ala"; // declared as a character array
     return ;

}

int main()
{
   // one_dimension();
    two_dimensions_static();
    two_dimensions_dynamic();
    two_dimensions_dynamic_one_piece();
    declareAsConst();
    return 0;
}

