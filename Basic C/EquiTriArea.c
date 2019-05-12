#include<stdio.h>
#include<math.h>

int main()

{
	float s,A;

	printf("\n Enter the length of EquiSide : \n");
	scanf("%f", &s);

	A = (pow(3,0.5)/4)*s*s;

	printf("\n The area A : %f \n", A);

	return 0;
}