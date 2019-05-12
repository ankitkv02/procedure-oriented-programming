#include<stdio.h>
#include<math.h>

int main()

{
	int num,i,fact=1;

	printf("Enter a number to find its factorial : ");
	scanf("%d",&num);

	for(i=num; i>=1; i--)
		fact = fact*i;

	printf("The factorial of %d, is : %d \n",num,fact);

	return 0;
}