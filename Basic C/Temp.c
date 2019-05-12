#include <stdio.h>

int main()

{
	float C,F;
	printf("\nEnter the value of temperature in celcius : \n");
	scanf("%f", &C);

	F = (C*9/5)+32;
	
	printf("\nThe temperature in Fahrenheit : %f F\n", F);

	return 0;
}