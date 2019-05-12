#include<stdio.h>
#include<math.h>
#define s 3

void EnterData(int frr[][s]);
int isLowerTri(int trr[][s]);
void PrintMatrix(int urr[][s]);
int r,c;

int main()
{
	int mat[s][s];

	printf("Enter elements into the matrix of size 3x3 : ");
	EnterData(mat);

	if(isLowerTri(mat))
		printf("Matrix is found to be a LowerTriangular matrix! \n");

	else
		printf("The matrix is NOT a LowerTriangular matrix. \n");

	PrintMatrix(mat);

	return 0;
}

void EnterData(int crr[][s])
{
	for(r=1; r<=s; r++)
	{
		for(c=1; c<=s; c++)
		{
			scanf("%d",&crr[r][c]);
		}
	}
}

int isLowerTri(int zrr[][s])
{
	for(r=1; r<=s; r++)
	{
		for(c=1; c<=s; c++)
		{
			if(c>r && zrr[r][c] != 0)
				return 0;
		}
	}
	return 1;
}

void PrintMatrix(int frr[][s])
{
	for(r=1; r<=s; r++)
	{
		for(c=1; c<=s; c++)
		{
			printf("%d ",frr[r][c]);
		}
		printf("\n");
	}
}