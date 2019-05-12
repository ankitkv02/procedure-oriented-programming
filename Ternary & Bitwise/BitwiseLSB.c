#include<stdio.h>
#include<math.h>

int main()

{
	int num;

	printf("Enter a number to check if its LSB is set : ");
	scanf("%d",&num);

	(num & 1) ? printf("LSB of %d, found to be set!\n",num) : printf("LSB of %d is unset.\n",num);

/*	if(num & 1)
		printf("The LSB of %d is found to be set !\n",num);

	else
		printf("Not set. \n");  */

	return 0;
}