#include<stdio.h>

int ProgressiveSum(int);
int DigSum(int);

int main()
{
	int num;

	printf("Enter a number to find the progressive sum of its digits : ");
	scanf("%d",&num);

	printf("The progressive sum of all the digits in %d is : %d \n",num,ProgressiveSum(num));

	return 0;
}

int ProgressiveSum(int h)
{
	return DigSum(h)<10 ? DigSum(h) : ProgressiveSum(DigSum(h));
} 

int DigSum(int u)
{
	return u/10==0 ? u : u%10+DigSum(u/10);		
}