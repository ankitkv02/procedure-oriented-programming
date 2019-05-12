#include<stdio.h>
#include<math.h>
#define max 3

void EnterData(int drr[][max]);
void PrintMatrix(int brr[][max]);
void InterchangeMatrixDia(int grr[][max]);
int row,col;

int main()
{
	int mat[max][max];

	EnterData(mat);

	printf("Matrix before the interchange of diagonals : \n");
	PrintMatrix(mat);

	InterchangeMatrixDia(mat);

	printf("Matrix after the interchange of diagonals : \n");
	PrintMatrix(mat);

	return 0;
}

void EnterData(int prr[][max])
{
	printf("Enter elements into the matrix of size 3x3 : ");
	for(row=1; row<=max; row++)
	{
		for(col=1; col<=max; col++)
		{
			scanf("%d",&prr[row][col]);
		}
	}
}

void PrintMatrix(int krr[][max])
{	
	for(row=1; row<=max; row++)
	{
		for(col=1; col<=max; col++)
		{
			printf("%d ",krr[row][col]);
		}
		printf("\n");
	}
}

void InterchangeMatrixDia(int jrr[][max])
{
	int swap;

	for(row=1; row<=max; row++)
	{
		swap = jrr[row][row];
		jrr[row][row] = jrr[row][max+1 - row];
		jrr[row][max+1 -row] = swap;
	}
}