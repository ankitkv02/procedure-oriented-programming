#include<stdio.h>
#include<math.h>
#define BITS sizeof(int) * 8

int main()

{
	int num,msb;

	printf("Enter a number to check if its MSB is set : ");
	scanf("%d",&num);

	msb = 1 << (BITS - 1);

	(num & msb) ? printf("MSB of %d is set!\n",num) : printf("MSB of this number is unset.\n");

	return 0;
}