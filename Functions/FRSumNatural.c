#include<stdio.h>
#include<math.h>

int SumNatural(int);

int main()
{
	int n,s;

	printf("Enter a number : ");
	scanf("%d",&n);

	s = SumNatural(n);
	printf("The sum of all the natural numbers between 1 and %d is : %d \n",n,s);

	return 0;
}

int SumNatural(int num)
{
	int sum;

	if(num==1)
		return 1;

	else
		return	num+SumNatural(num-1);
	
}