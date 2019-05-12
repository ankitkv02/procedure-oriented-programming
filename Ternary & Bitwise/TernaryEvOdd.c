#include<stdio.h>
#include<math.h>

int main()

{
	int num,EvOdd;

	printf("Enter a number to find out if it's an even or odd number : ");
	scanf("%d",&num);

	(num%2==0) ? printf("Even!\n") : printf("Odd!\n");

/*	EvOdd = (num%2==0) ? 1 : 0;

	switch(EvOdd)
	{
		case 1:
		printf("%d is found to be an even number! \n",num);
		break;
	
		case 0:
		printf("%d is an odd number. \n",num);
		break;
	}  */

	return 0;
}