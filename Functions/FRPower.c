#include<stdio.h>
#include<math.h>

long Power(int,int);

int main()
{
	int B,e;
	long s;

	printf("Enter the value of Base B : ");
	scanf("%d",&B);


	printf("Enter the value of Exponant e : ");
	scanf("%d",&e);

	s = Power(B,e);

	printf("%d to the power %d is : %ld \n",B,e,s);

	return 0;
}

long Power(B,e)
{
	if (e == 0)
		return 1;
	
	else if (e == 1)
		return B;

	else
		return B * Power(B,e-1);
}
