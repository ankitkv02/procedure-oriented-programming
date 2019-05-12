#include<stdio.h>
#define max 3

void CreateMatrix(int vrr[][max]);
void PrintMatrix(int lrr[][max]);
void AddMatrix(int hrr[][max],int prr[][max],int wrr[][max]);
void MultiplyMatrix(int brr[][max],int vrr[][max],int urr[][max]);
int i,j;

int main()
{
	int m1[max][max],m2[max][max],res[max][max];

	CreateMatrix(m1);
	printf("Matrix1 looks like - \n");
	PrintMatrix(m1);

	CreateMatrix(m2);
	printf("Matrix2 looks like - \n");
	PrintMatrix(m2);

	AddMatrix(m1,m2,res);
	PrintMatrix(res);

	MultiplyMatrix(m1,m2,res);
	PrintMatrix(res);

	return 0;
}

void CreateMatrix(int krr[][max])
{
	printf("Enter elements into the matrix one by one : ");
	for(i=1; i<=max; i++)
	{
		for(j=1; j<=max; j++)
		{
			scanf("%d",&krr[i][j]);
		}
	}
}

void PrintMatrix(int yrr[][max])
{
	for(i=1; i<=max; i++)
	{
		for(j=1; j<=max; j++)
		{
			printf("%d ",yrr[i][j]);
		}
		printf("\n");
	}
}

void AddMatrix(int crr[][max],int srr[][max],int qrr[][max])
{
	printf("Sum of the two matrix is - \n");
	for(i=1; i<=max; i++)
	{
		for(j=1; j<=max; j++)
		{
			qrr[i][j] = crr[i][j] + srr[i][j];
		}
	}

}

void MultiplyMatrix(int trr[][max],int prr[][max],int wrr[][max])
{
	int ele,sum=0;

	printf("The product of matrices is - \n");
	for(i=1; i<=max; i++)
	{
		for(j=1; j<=max; j++)
		{
			for(ele=1; ele<=max; ele++)
			{
				sum += trr[i][ele] * prr[ele][j];
			}
			wrr[i][j] = sum;
			sum = 0;
		}
	}
}