#include <stdio.h>


//Napisz program liczący pole trójkąta o wymiarach podanych przez użytkownika.


double pole_trojkata(double a,double b, double c) {
//printf("%lf %lf %lf", a,b,c);
double p = 0.5*(a+b+c);
return sqrt(p*(p-a)*(p-b)*(p-c) ); // wzor herona

}

int main() {
double a,b,c;

printf("program liczy pole trojkata dla podanych krawedzi a b c:  "); 
scanf("%lf %lf %lf",&a,&b,&c);
printf("pole wynosi: %lf ",pole_trojkata(a,b,c));

return 0;
}
