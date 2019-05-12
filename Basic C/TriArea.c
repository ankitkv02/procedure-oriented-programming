#include<stdio.h>

int main ()

{
	float B,H,A;
	printf("\n Enter the value of TriangleBase : \n");
	scanf("%f",&B);

	printf("\n Enter the value of TriangleHeight : \n");
	scanf("%f",&H);

	A = (B*H)/2;

	printf("\n Area of the Triangle : %.2f \n", A);

	return 0;

}