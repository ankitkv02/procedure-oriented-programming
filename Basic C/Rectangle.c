#include <stdio.h>

int main()

{
	float l,b;
	printf("\n Enter the value of Length(L)  : ");
	scanf("%f",&l);
	
	printf("\n Enter the value of Breadth(B)  : ");
	scanf("%f",&b);

	printf("\nThe Perimeter of the Rect (P) is : %f", 2*(l+b));

	printf("\nThe Area of the Rect (A) is : %f", l*b);

	return 0;
}