#include<stdio.h>
#define s 3

void EnterData(int qrr[][s]);
void PrintMatrix(int trr[][s]);
int DeterMatrix(int drr[][s]);
int r,c;

int main()
{
	int mat[s][s];

	printf("Enter elements into the matrix of size 3x3 : ");
	EnterData(mat);

	PrintMatrix(mat);
	printf("The determinant of the above matrix is = %d \n",DeterMatrix(mat));

	return 0;
}

void EnterData(int arr[][s])
{
	for(r=0; r<s; r++)
	{
		for(c=0; c<s; c++)
		{
			scanf("%d",&arr[r][c]);
		}
	}
}

void PrintMatrix(int err[][s])
{
	for(r=0; r<s; r++)
	{
		for(c=0; c<s; c++)
		{
			printf("%d ",err[r][c]);
		}
		printf("\n");
	}
}

int DeterMatrix(int yrr[][s])
{
	int deter;

	deter = yrr[0][0]*(yrr[1][1]*yrr[2][2] - yrr[1][2]*yrr[2][1]) - yrr[0][1]*(yrr[1][0]*yrr[2][2] - yrr[1][2]*yrr[2][0]) + yrr[0][2]*(yrr[1][0]*yrr[2][1] - yrr[1][1]*yrr[2][0]);

	return deter;
}