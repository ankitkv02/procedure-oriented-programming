#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c,discreminant,root1,root2,realpart,imaginarypart;
	
	printf("Enter the values of cofficients a, b and c :\n");
	scanf("%lf%lf%lf",&a,&b,&c);

	discreminant = b*b-4*a*c;

	if (discreminant > 0)
	{
		root1 = (-b+sqrt(discreminant))/(2*a);
		root2 = (-b-sqrt(discreminant))/(2*a);
		
		printf("Root1 = %.2lf \n Root2 = %.2lf\n",root1,root2);	
	}
	else if (discreminant == 0)
	{
		root1 = root2 = -b/(2*a);

		printf("Root1 = Root2 = %.2lf\n",root1);
	}
	else
	{
		realpart = -b/(2*a);
		imaginarypart = sqrt(-discreminant)/(2*a);

		printf("Root1 = %.2lf + %.2lfi \n Root2 = %.2lf - %.2lfi\n",realpart,imaginarypart,realpart,imaginarypart);
	}

	return 0;
}