#include<stdio.h>
#include<math.h>

int isPrime(int);

int main()
{
	int num,i,flag;

	printf("Enter a number : ");
	scanf("%d",&num);

	flag = 0;
	for(i=2; i<=num/2; i++)
	{
		if(isPrime(i) && isPrime(num-i))
		{
			printf("%d = %d + %d\n",num,i,num-i);
			flag = 1;
		}
	}

	if(flag == 0)
		printf("%d can not be expressed as a sum of two prime numbers. \n",num);

	return 0;
}

int isPrime(int x)
{
	int i;

	for(i=2; i<=x/2; i++)
		if(x%i==0)
			return 0;

	return 1;
}