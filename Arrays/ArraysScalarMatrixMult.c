#include<stdio.h>
#include<math.h>
#define size 3

int main()
{
	int matrix[size][size],scalar[size][size],mult,row,col;

	printf("Enter elements into the matrix of 3x3 : ");
	for(row=1; row<=size; row++)
	{
		for(col=1; col<=size; col++)
		{
			scanf("%d",&matrix[row][col]);
		}
	}

	printf("Enter the value of multiplier : ");
	scanf("%d",&mult);

	for(row=1; row<=size; row++)
	{
		for(col=1; col<=size; col++)
		{
			scalar[row][col] = matrix[row][col] * mult;
		}
	}

	printf("The modified matrix after scalar multiplication : \n");
	for(row=1; row<=size; row++)
	{
		for(col=1; col<=size; col++)
		{
			printf("%d ",scalar[row][col]);
		}
		printf("\n");
	}

	return 0;
}