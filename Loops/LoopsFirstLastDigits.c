#include<stdio.h>
#include<math.h>

int main()

{
	int num,first,last;

	printf("Enter a number to find out its first and last digit : ");
	scanf("%d",&num);

	last = num % 10;

	first = num;
	while(first >= 10)
		first /= 10;

	printf("First and last digit of the number %d, are %d and %d respectively. \n",num,first,last);

	return 0;
}