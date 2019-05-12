#include<stdio.h>
#include<math.h>
#define s 3

void EnterData(int trr[][s]);
int isIdentityMat(int urr[][s]);
void PrintMatrix(int drr[][s]);
int r,c;

int main()
{
	int mat[s][s];

	printf("Enter elements into the matrix of size 3x3 : ");
	EnterData(mat);

	if(isIdentityMat(mat))
		printf("The matrix is found to be an Identity matrix! \n");

	else
		printf("The matrix is NOT an identity matrix. \n");

	PrintMatrix(mat);

	return 0;
}

void EnterData(int yrr[][s])
{
	for(r=1; r<=s; r++)
	{
		for(c=1; c<=s; c++)
		{
			scanf("%d",&yrr[r][c]);
		}
	}
}

int isIdentityMat(int frr[][s])
{
	for(r=1; r<=s; r++)
	{
		for(c=1; c<=s; c++)
		{
			if((r==c && frr[r][c] != 1))
				return 0;

			else if(r!=c && frr[r][c] != 0)
				return 0;
		}
	}
	return 1;
}

void PrintMatrix(int hrr[][s])
{
	for(r=1; r<=s; r++)
	{
		for(c=1; c<=s; c++)
		{
			printf("%d ",hrr[r][c]);
		}
		printf("\n");
	}
}