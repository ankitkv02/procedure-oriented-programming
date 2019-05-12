#include<stdio.h>
#include<math.h>
#define max 3

int main()
{
	int mat[max][max],r,c,row,col,rowSum,colSum;

	printf("Enter the size of the matrix : ");
	scanf("%d%d",&r,&c);

	printf("Please enter elements into the matrix of size %dx%d : ",r,c);
	for(row=1; row<=r; row++)
	{
		for(col=1; col<=c; col++)
		{
			scanf("%d",&mat[row][col]);
		}
	}

	rowSum = 0;
	for(row=1; row<=r; row++)
	{
		for(col=1; col<=c; col++)
		{
			rowSum += mat[row][col];
		}
		printf("Sum of row %d = %d \n",row,rowSum);
		rowSum = 0;
	}

	colSum = 0;
	for(row=1; row<=r; row++)
	{
		for(col=1; col<=c; col++)
		{
			colSum += mat[col][row];
		}
		printf("Sum of column %d = %d \n",row,colSum);
		colSum = 0;
	}

	return 0;
}