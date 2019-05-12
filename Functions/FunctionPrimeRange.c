#include<stdio.h>
#include<math.h>

void PrimeRange(int,int);

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

void PrimeRange(int a, int b)
{
	int i,j,isPrime;

	printf("All the Prime numbers between %d and %d are : \n",a,b);
	for(i=a; i<=b; i++)
	{
		isPrime = 1;
		for(j=2; j<=i/2; j++)
		{		
			if(i%j==0)
			{					
				isPrime = 0;				
			}
		}
		if(isPrime==1)
			printf("%d, ",i);	
	}

}