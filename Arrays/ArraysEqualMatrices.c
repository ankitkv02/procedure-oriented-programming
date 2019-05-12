#include<stdio.h>
#include<math.h>
#define size 3

int main()
{
	int m1[size][size],m2[size][size],row,col,flag;

	printf("Enter elements into 1st matrix : ");
	for(row=1; row<=size; row++)
	{
		for(col=1; col<=size; col++)
		{
			scanf("%d",&m1[row][col]);
		}
	}

	printf("Enter elements into 2nd matrix : ");
	for(row=1; row<=size; row++)
	{
		for(col=1; col<=size; col++)
		{
			scanf("%d",&m2[row][col]);
		}
	}

	for(row=1; row<=size; row++)
	{
		for(col=1; col<=size; col++)
		{
			if(m1[row][col] != m2[row][col])
				flag = 0;
		}
	}

	if(flag == 0)
		printf("Matrices are NOT EQUAL! \n");

	else
		printf("Both the matrices are found to be EQUAL! \n");

	return 0;
}