#include<stdio.h>
#include<math.h>

char* EvOdd(int);

int main()
{
	int n;

	printf("Enter a number to know if it's an even number or odd : ");
	scanf("%d",&n);

	printf("%d is found to be an %s number! \n",n,EvOdd(n));

	return 0;
}

char* EvOdd(int a)
{
	return (a%2==0) ? "Even" : "Odd";
}