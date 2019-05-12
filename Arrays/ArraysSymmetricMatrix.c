#include<stdio.h>
#include<math.h>
#define s 3

void EnterData(int jrr[][s]);
int isSymmetric(int jrr[][s]);
void PrintMatrix(int crr[][s]);
int r,c;

int main()
{
	int mat[s][s];

	printf("Enter elements into the matrix of size 3x3 : ");
	EnterData(mat);

	if(isSymmetric(mat))
		printf("The matrix is found to be a Symmetric Matrix! \n");

	else
		printf("Matrix is NOT a Symmetric Matrix. \n");

	PrintMatrix(mat);

	return 0;
}

void EnterData(int vrr[][s])
{
	for(r=1; r<=s; r++)
	{
		for(c=1; c<=s; c++)
		{
			scanf("%d",&vrr[r][c]);
		}
	}
}

int isSymmetric(int drr[][s])
{
	for(r=1; r<=s; r++)
	{
		for(c=1; c<=s; c++)
		{
			if(drr[r][c] != drr[c][r])
				return 0;
		}
	}
	return 1;
}

void PrintMatrix(int arr[][s])
{
	for(r=1; r<=s; r++)
	{
		for(c=1; c<=s; c++)
		{
			printf("%d ",arr[r][c]);
		}
		printf("\n");
	}
}