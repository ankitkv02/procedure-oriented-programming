#include<stdio.h>

int isNDPS(int);

int main()
{
	int num,i;

	printf("Enter a number : ");
	scanf("%d",&num);

	for(i=num; i>=2; i--)
	{
		if(num%i == 0 && isNDPS(i))
		{
			printf("Greatest divisor of %d which is not divisible by a pefect square is : %d \n",num,i);
			break;
		}
	}

	return 0;
}

int isNDPS(int x)
{
	int i,j;

	for(i=2; i<=x; i++)
	{
		if(x%i==0)
		{
			for(j=2; j<=i; j++)
			{
				if(j*j == i)
					return 0;
			}

		}
	}

	return 1;
}