#include<stdio.h>
#include<math.h>

int main()

{
	int num,temp,DigiSum;

	printf("Enter a number to find the sum of its digits : ");
	scanf("%d",&num);

	temp = num;
	DigiSum = 0;
	while(temp != 0)
	{
		DigiSum += temp%10;
		temp /= 10;
	}
	printf("The sum of all the digits in %d, is : %d \n",num,DigiSum);

	return 0;
}