#include <stdio.h>
int f(int k) {
return (k<2)?(1):(f(k-1)+f(k-2));
}



int main() {
int n;
char z;

printf("program liczy n-ty wyraz ciagu. \nPodaj n: ");
scanf("%i", &n);

printf("\n n-ty wyraz ciagu fibonacciego wynosi %i\n", f(n) );

printf("\n n-ty wyraz ciagu fibonacciego wynosi %i\n", fib(n) );

getchar();
z='t';
printf("podano enter aby zakończyć działanie programu. "); 


scanf("%c", &z);
while (z!='\n') { printf("nie podano entera!! ");  scanf("%c", &z);  } 


}

	int fib(int n) {
int w=0;
int p=1;
int d=1;
int index;
	if (n==0 || n==1 ) {
	 	return 0;
	} else {
		for (index=2;index<=n;++index) {
			w= p+d;
			d=p;
			p=w;
		}		

	}

//printf("w: %i",w);


	return w;
}

