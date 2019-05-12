#include<stdio.h>
#include<math.h>

int main()

{
	int n,digits;

	printf("Enter a Number to know the number of digits in it : ");
	scanf("%d",&n);

	digits = (int)log10(n) + 1;

	printf("There are %d digits in %d \n",digits,n);

	return 0;
}