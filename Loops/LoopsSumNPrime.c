#include<stdio.h>
#include<math.h>

int main()

{
	int n,i,j,isPrime,sum=0;

	printf("Enter the value of n to print sum of all the prime numbers under it : ");
	scanf("%d",&n);

	for(i=2; i<=n; i++)
	{
		isPrime = 1;

		for(j=2; j<=i/2; j++)
		{
			if(i%j==0)
			{
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 1)
			sum += i;

	}
	printf("Sum = %d \n",sum);
	
	return 0;
}