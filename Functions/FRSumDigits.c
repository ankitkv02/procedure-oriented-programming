#include<stdio.h>
#include<math.h>

int SumDigits(int);

int main()
{
	int num;

	printf("Enter a number to find sum of its digits : ");
	scanf("%d",&num);

	printf("The sum of all digits of %d, is : %d \n",num,SumDigits(num));

	return 0;
}

int SumDigits(int x)
{
	return (x/10==0) ? x : x%10+SumDigits(x/10);
}