#include<stdio.h>

int main()
{
	int a,b,min,i;

	printf("Enter two numbers to check if they are mutually co-prime : ");
	scanf("%d%d",&a,&b);

	min = a<b ? a : b;

	for(i=2; i<=min; i++)
	{
		if(a%i == 0 && b%i == 0)
			break;
	}

	if(i == min+1)
		printf("%d and %d are found to be co-prime! \n",a,b);

	else
		printf("The numbers entered are not co-prime. \n");

	return 0;
}