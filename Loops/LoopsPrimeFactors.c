#include<stdio.h>
#include<math.h>

int main()

{
	int num,i,j,isPrime;

	printf("Enter a number to find out its prime factors : ");
	scanf("%d",&num);

	for(i=2; i<=num; i++)
	{
		if(num%i==0)
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
			if(isPrime==1)
				printf("%d \n",i);
		}
		
	}

	return 0;
}