#include<stdio.h>
#include<math.h>

void PrimeRange(int,int);
int isPrime(int);

int main()
{
	int low,upp;

	printf("Enter the lower limit : ");
	scanf("%d",&low);

	printf("Enter the upper limit : ");
	scanf("%d",&upp);

	if(low>upp)
		printf("Invalid limits! \n");

	else
	{
		PrimeRange(low,upp);
		printf("\n");	
	}

	return 0;
}

void PrimeRange(int a,int b)
{
	printf("All the prime numbers between %d and %d are : \n",a,b);

	while(a<=b)
	{
		if(isPrime(a))
		{
			printf("%d, ",a);
		}
		a++;
	}

}

int isPrime(int x)
{
	int i;

	for(i=2; i<=x/2; i++)
	{
		if(x%i==0)
		{
			return 0;
		}

	}
	return 1;
}