#include<stdio.h>
#include<math.h>
#define max 3

int main()
{
	int mat[max][max],row,col,sum=0;

	printf("Please enter elements into matrix of size 3x3 : ");
	for(row=1; row<=max; row++)
	{
		for(col=1; col<=max; col++)
		{
			scanf("%d",&mat[row][col]);
		}
	}

	for(row=1; row<=max; row++)
	{	
		sum += mat[row][max+1 - row];
	}

	printf("The sum of main diagonal elements is : %d \n",sum);

	return 0;
}