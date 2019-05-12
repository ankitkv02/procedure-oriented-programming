#include<stdio.h>
#include<math.h>
#define s 3

void EnterData(int yrr[][s]);
int sumUpperTri(int brr[][s]);
int r,c;

int main()
{
	int mat[s][s];

	printf("Enter elements into the matrix of size 3x3 : ");
	EnterData(mat);

	printf("The sum of upper triangular matrix is = %d \n",sumUpperTri(mat));

	return 0;
}

void EnterData(int xrr[][s])
{
	for(r=1; r<=s; r++)
	{
		for(c=1; c<=s; c++)
		{
			scanf("%d",&xrr[r][c]);
		}
	}
}

int sumUpperTri(int nrr[][s])
{
	int sum = 0;

	for(r=1; r<=s; r++)
	{
		for(c=1; c<=s; c++)
		{
			if(r<=c)
				sum += nrr[r][c];
		}
	}
	return sum;
}