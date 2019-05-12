#include <stdio.h>


int main()
{	
	double a,b,result;
	char operator;

	printf("\nChoose an operator (+,-,*,/,) : ");
	scanf("%c",&operator);

	printf("\nEnter the value of A : ");
	scanf("%lf",&a);

	printf("Enter the value of B : ");
	scanf("%lf",&b);

	result = 0;

	if (operator == '+')
		result = a+b;

	else if (operator == '-')
		result = a-b;
	
	else if (operator == '*')
		result = a*b;

	else if (operator == '/')
		result = a/b;

	else
		result = (int)a % (int)b;

	printf("%.1lf %c %.1lf = %.1lf \n",a,operator,b,result);

	return 1;
}