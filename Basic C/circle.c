#include <stdio.h>


int main()

{
	float r,d,A,P;

	printf("\nEnter the radius R : ");
	scanf("%f",&r);

	printf("\nThe diameter of the circle d : %f", 2*r);

	printf("\nThe area of the circle A : %f", 3.14*r*r);

	printf("\nThe perimeter of the circle P : %f", 2*3.14*r);

	return 0;
}