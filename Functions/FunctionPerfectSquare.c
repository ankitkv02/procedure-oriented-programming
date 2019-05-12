#include<stdio.h>

int isPerfectSquare(int);

int main()
{
	int x;

	printf("Enter a number : ");
	scanf("%d",&x);

	if(isPerfectSquare(x))
		printf("%d is found to be a Perfect Square! \n",x);

	else
		printf("%d ain't a perfect square. \n",x);

	return 0;
}

int isPerfectSquare(int a)
{
	int i;

	for(i=0; i<=a/2; i++)
	{
		if(i*i == a)
			return 1;
	}

	return 0;
}