#include<stdio.h>
#include<math.h>

int main()

{
	long long  x,y,P;

	printf("\n Enter the value of base : \n");
	scanf("%lld", &x);

	printf("\n Enter the value of exponent : \n");
	scanf("%lld", &y);

	P = pow(x,y);

	printf(" %lld^%lld = %lld \n", x,y,P);

	return 0;
}