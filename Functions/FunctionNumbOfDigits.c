#include<stdio.h>
#include<math.h>

int digCount(int);

int main()
{
	int num;

	printf("Enter a digit to find the number of digits in it : ");
	scanf("%d",&num);

	printf("No. of digits in %d are : %d \n",num,digCount(num));

	return 0;
}

int digCount(int x)
{
	int count=0;

	while(x != 0)
	{
		x /= 10;
		count++;
	}
	return count;
}