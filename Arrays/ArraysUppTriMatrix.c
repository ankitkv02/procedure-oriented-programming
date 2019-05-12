#include<stdio.h>
#include<math.h>
#define max 3

void EnterData(int grr[][max]);
int isUpperTri(int trr[][max]);
void PrintMatrix(int vrr[][max]);

int row,col;

int main()
{
	int mat[max][max];

	printf("Enter elements into the matrix of size 3x3 : ");
	EnterData(mat);

	if(isUpperTri(mat))
		printf("Matrix is found to be an UpperTriangular matrix! \n");

	else
		printf("Matrix is NOT an UpperTriangular matrix. \n");

	PrintMatrix(mat);

	return 0;
}

void EnterData(int qrr[][max])
{
	for(row=1; row<=max; row++)
	{
		for(col=1; col<=max; col++)
		{
			scanf("%d",&qrr[row][col]);
		}
	}
}

int isUpperTri(int prr[][max])
{
	for(row=1; row<=max; row++)
	{
		for(col=1; col<=max; col++)
		{
			if(col<row && prr[row][col] != 0)
				return 0;
		}
	}
	return 1;
}

void PrintMatrix(int zrr[][max])
{
	for(row=1; row<=max; row++)
	{
		for(col=1; col<=max; col++)
		{
			printf("%d ",zrr[row][col]);
		}
		printf("\n");
	}
}