#include<stdio.h>
#include<math.h>

int main()

{
	float P,R,T,CI;

	printf("\n Enter the value of Principle : ");
	scanf("%f",&P);

	printf("\n Enter the value of Rate : ");
	scanf("%f",&R);

	printf("\n Enter the value of Time Period : ");
	scanf("%f",&T);

	CI=P*(pow((1+R/100),T));

	printf("\n The Compound Interest : %.2f \n\n",CI);
	return 1;
}