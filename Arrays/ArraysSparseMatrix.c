#include<stdio.h>
#include<math.h>
#define s 3

void EnterData(int vrr[][s]);
int isSparseMat(int brr[][s]);
void PrintMatrix(int xrr[][s]);
int r,c;

int main()
{
	int mat[s][s];

	printf("Enter elements into matrix of size 3x3 : ");
	EnterData(mat);

	if(isSparseMat(mat))
		printf("Matrix is found to be a sparse matrix! \n");

	else
		printf("Matrix is NOT a sparse matrix. \n");

	PrintMatrix(mat);

	return 0;
}

void EnterData(int srr[][s])
{
	for(r=1; r<=s; r++)
	{
		for(c=1; c<=s; c++)
		{
			scanf("%d",&srr[r][c]);
		}
	}
}

int isSparseMat(int nrr[][s])
{
	int count=0;

	for(r=1; r<=s; r++)
	{
		for(c=1; c<=s; c++)
		{
			if(nrr[r][c] == 0)
				count++;
		}
	}
	return count >= (s*s)/2;
}

void PrintMatrix(int zrr[][s])
{
	for(r=1; r<=s; r++)
	{
		for(c=1; c<=s; c++)
		{
			printf("%d ",zrr[r][c]);
		}
		printf("\n");
	}
}