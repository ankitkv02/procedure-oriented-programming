#include<stdio.h>
#include<math.h>

int isPrime(int);
int isArmstrong(int);
int isPerfect(int);

int main()

{
	int num;

	printf("Enter a number to find out if it's a Prime or an Armstrong or a Perfect number : ");
	scanf("%d",&num);

	if(isPrime(num))
		printf("%d is found to be a Prime number! \n",num);

	else if(isArmstrong(num))
		printf("%d is found to be an Armstrong number! \n",num);

	else if(isPerfect(num))
		printf("%d is found to be a Perfect number! \n",num);

	else
		printf("%d is found to be a Composite number! \n",num);			

	return 0;
}

int isPrime(int a)
{
	int i;

	for(i=2; i<=a/2; i++)
	{
		if(a%i == 0)
			return 0;
	}
	return 1;
}

int isArmstrong(int b)
{
	int digits,temp,lastDig,sum=0;

	digits = (int)log10(b)+1;
	
	temp = b;
	while(temp>0)
	{
		lastDig = temp%10;
		sum += pow(lastDig,digits);
		temp /= 10;
	}

	return (b == sum);	
}

int isPerfect(int c)
{
	int i,sum=0;

	for(i=1; i<=c/2; i++)
	{
		if(c%i==0)
			sum += i;
	}

	return (c==sum);
}