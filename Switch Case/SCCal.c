#include<stdio.h>
#include<math.h>

int main()

{
	printf("\nChoose an operator (+,-,*,/,): ");
	char operator;
	scanf("%c",&operator);

	printf("Enter the first number A : ");
	double a;
	scanf("%lf",&a);

	printf("Enter the second number B : ");
	double b;
	scanf("%lf",&b);

	float result;

	switch(operator)
		{
			case '+' :
			result = a+b;
			break;

			case '-' :
			result = a-b;
			break;

			case '*' :
			result = a*b;
			break;

			case '/' :
			result = a/b;
			break;

			case '%' :
			result = (int)a % (int)b;
			break;

			default :
			printf("Invalid Operation !");

		}
		printf("%.1lf %c %.1lf = %.1lf \n",a,operator,b,result);
	
	return 0;
}