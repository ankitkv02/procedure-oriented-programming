#include <stdio.h>

int main()

{
	float Lcm;	
	printf("\n Length in cm : ");
	scanf("%f",&Lcm);

	printf("\nLength in m : %f m \n", Lcm/100);

	printf("\nLength in km : %f km \n", Lcm/1000);

	return 0;
}