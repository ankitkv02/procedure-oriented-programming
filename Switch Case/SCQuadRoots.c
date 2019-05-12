#include<stdio.h>
#include<math.h>

int main()

{
	double a,b,c,discremenant,r1,r2,RP,IP;
	int sign;
	
	printf("Enter the value of a (cofficient of x^2) : ");
	scanf("%lf",&a);

	printf("Enter the value of b (cofficient of x) : ");
	scanf("%lf",&b);

	printf("Enter the value of c (constant) : ");
	scanf("%lf",&c);

	discremenant = b*b-4*a*c;

	if (discremenant > 0)
	{
		sign = 1;
		r1 = (-b+sqrt(discremenant))/2*a;
		r2 = (-b-sqrt(discremenant))/2*a;
	}

	else if (discremenant == 0)
	{
		sign = 0;
		r1 = r2 = -b/2*a;
	}
	
	else
	{
		sign = -1;
		RP = -b/2*a;
		IP = sqrt(-discremenant)/2*a;
	}
		
	switch (sign)
	{
		case 1:
		printf("Root1 = %.2lf \n Root2 = %.2lf \n",r1,r2);
		break;

		case 0:
		printf("Root1 = %.2lf \n Root2 = %.2lf \n",r1,r2);
		break;

		case -1:
		printf("Root1 = %.2lf + %.2lfi \n Root2 = %.2lf - %.2lfi \n",RP,IP,RP,IP);
				
	}

	return 0;
}