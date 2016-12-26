#include <stdio.h>


void show_tab(int *t,int roz) {

    for (int i=0 ;i<roz;++i) {
        printf("%d: %d \n ", i, *(t+i));
    }
}


int fun(int *t1,int t2[2], int t3[3], int t4[4], int t5[])
{
    printf("%d %d %d %d %d",t1[0],t2[0],t3[0],t4[0],t5[0]);
}

int main() {

printf("--------------- MAIN -------------\n ");
int roz=20;
int t[roz];

for (int i=0;i< roz;++i) {
    t[i]=i+10;
}

show_tab(t,roz);

fun(t,t,t,t,t);

return 0;
}
