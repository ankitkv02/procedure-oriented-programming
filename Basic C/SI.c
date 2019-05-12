#include<stdio.h>

int main()

{
	float A,P,R,T;
	printf("\n Enter the value of Principal : ");
	scanf("%f",&P);

	printf("\n Enter the value of Rate : ");
	scanf("%f",&R);

	printf("\n Enter the value of Time Period : ");
	scanf("%f",&T);

	A=(P*R*T)/100;

	printf("\nThe amount A : %.2f\n\n",A);
	return 1;
}