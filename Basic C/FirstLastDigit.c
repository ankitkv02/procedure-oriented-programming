#include<stdio.h>
#include<math.h>

int main()

{
	int n,digits,first,last;

	printf("Enter a Number to know its First & Last digits : ");
	scanf("%d",&n);

	last = n%10;

	digits = (int)log10(n);

	first = (int)(n/pow(10,digits));

	printf("The first digit is %d and the last digit is %d \n",first,last);
	printf("%d contains %d digits. \n",n,digits+1);

	return 0;
}