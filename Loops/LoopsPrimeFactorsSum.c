#include<stdio.h>
#include<math.h>

int main()

{
	int num,i,j,isPrime,temp,sum=0;

	printf("Enter a number to find out its prime factors : ");
	scanf("%d",&num);

	printf("Prime Factors of %d, are : ",num);
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
			{
				temp = num;
				while(temp%i==0)
				{
					temp = temp/i;
					printf(" %d, ",i);
					sum += i;

				}
				
			}

		}
		
	}
	printf("\nAnd the sum of all the prime factors is : %d \n",sum);

	return 0;
}