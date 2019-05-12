#include<stdio.h>
#include<math.h>
#define s 3

void EnterData(int nrr[][s]);
int sumLowTri(int arr[][s]);
int r,c;

int main()
{
	int mat[s][s];

	printf("Enter elements into the matrix of size 3x3 : ");
	EnterData(mat);

	printf("The sum of lower triangular matrix is : %d \n",sumLowTri(mat));

	return 0;
}

void EnterData(int mrr[][s])
{
	for(r=1; r<=s; r++)
	{
		for(c=1; c<=s; c++)
		{
			scanf("%d",&mrr[r][c]);
		}
	}
}

int sumLowTri(int hrr[][s])
{
	int sum = 0;

	for(r=1; r<=s; r++)
	{
		for(c=1; c<=s; c++)
		{
			if(c<=r)
				sum += hrr[r][c];
		}
	}
	return sum;
}