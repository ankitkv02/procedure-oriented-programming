#include<stdio.h>

int main ()

{
	float F,C;
	printf("\n Enter the value of temperature in Fahrenheit : \n");
	scanf("%f", &F);

	C = (F-32)*5/9;

	printf("\n The temperature in Celcius is : %f F\n", C);

	return 0;	
}