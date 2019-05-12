#include<stdio.h>
#include<math.h>
#define s 3

void EnterData(int yrr[][s]);
void PrintMatrix(int xrr[][s]);
void TransMatrix(int drr[][s],int frr[][s]);
int r,c;

int main()
{
	int mat[s][s],trans[s][s];

	printf("Enter elements into the matrix of size 3x3 : ");
	EnterData(mat);

	printf("Original Matrix :\n");
	PrintMatrix(mat);

	TransMatrix(mat,trans);

	printf("Transpose Matrix :\n");
	PrintMatrix(trans);

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

void PrintMatrix(int urr[][s])
{
	for(r=1; r<=s; r++)
	{
		for(c=1; c<=s; c++)
		{
			printf("%d ",urr[r][c]);
		}
		printf("\n");
	}
}

void TransMatrix(int srr[][s],int trr[][s])
{
	for(r=1; r<=s; r++)
	{
		for(c=1; c<=s; c++)
		{
			trr[r][c] = srr[c][r];
		}
	}
}