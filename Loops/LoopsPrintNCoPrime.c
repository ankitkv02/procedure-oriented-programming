#include<stdio.h>

int main()
{
	int N,a,b,i,min;

	printf("Enter the number of co-prime pairs you want to see : ");
	scanf("%d",&N);

	a = 2;
	while(N)
	{
		for(b=2; b<=a; b++)
		{
			min = a<b ? a : b;
			for(i=2; i<=min; i++)
			{
				if(a%i == 0 && b%i == 0)
					break;
			}
			if(i == min+1)
			{
				printf("(%d, %d) \n",a,b);
				N--;
				if(N == 0)
					break;
			}
		}
		a++;
	}

	return 0;
}