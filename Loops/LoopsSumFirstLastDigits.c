#include<stdio.h>
#include<math.h>

int main()

{
	int num,last,digits,first,sum;

	printf("Enter a number to find out the sum of its first and last digit : ");
	scanf("%d",&num);

	last = num%10;

	digits = (int)log10(num);

	first = (int)(num / pow(10,digits));

	sum = first + last;

	printf("The sum of first and last digits of %d, is : %d \n",num,sum);

	return 0;
}