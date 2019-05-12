#include<stdio.h>
#include<math.h>

int Fact(int);

int main()
{
	int num;

	printf("Enter a number to find its Factorial : ");
	scanf("%d",&num);

	printf("%d! = %d \n",num,Fact(num));

	return 0;
}

int Fact(int x)
{
	return x==0 ? 1 : x==1 ? x : x*Fact(x-1);
}