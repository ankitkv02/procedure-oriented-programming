#include<stdio.h>
#include<math.h>

int main()

{ 
	float No,P=0.5,SR;
	printf("\n Enter the Number to be SquareRooted : \n");
	scanf("%f",&No);

	SR = pow(No,P);

	printf("\n The SR : %f \n", SR);

	return 0;


}