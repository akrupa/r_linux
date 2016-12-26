#include <stdio.h>


int nwd(int a,int b) {
int r;
if(b>a) {
r = a;
a=b;
b=r;

}

r = a%b;
while(r!=0) {
a= b;
b=r;
r= a%b;

}

return b;
}

int nww(int a, int b) {

return a*b/nwd(a,b); 

}


//Napisz funkcję liczącą rekurencyjnie NWD. a>b
int nwd_r(int a,int b) {
 return (a%b==0)?(b):( nwd_r(b,a%b));

}
int main() {

int a;
int b;
printf("podaj a i b: ");
scanf("%d %d",&a,&b);

int c= nwd(a,b);

printf("a: %d",c);
printf("\nnwd_r %d",nwd_r(a,b));
return 0;
}
