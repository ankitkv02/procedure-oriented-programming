#include<stdio.h>
#include<math.h>

int main()

{
	int n,i,j,isPrime;

	printf("Enter the value of n to print all the prime numbers under it : ");
	scanf("%d",&n);

	printf("All the prime numbers between 1 and %d, are : \n",n);

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
			printf("%d \n",i);	
			
	}		

	return 0;
}