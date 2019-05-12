#include<stdio.h>
#include<math.h>
#define size 3

int main()
{
	int m1[size][size],m2[size][size],mult[size][size],row,col,r1,c1,r2,c2,r3,c3,element,add,sum;

	printf("Enter the size of first matrix : ");
	scanf("%d%d",&r1,&c1);

	printf("Enter elements into first matrix of size %dx%d : ",r1,c1);
	for(row=1; row<=r1; row++)
	{
		for(col=1; col<=c1; col++)
		{
			scanf("%d",&m1[row][col]);
		}
	}

	printf("Enter the size of second matrix : ");
	scanf("%d%d",&r2,&c2);

	if(c1 != r2)
		printf("Multiplication can not be performed! No. of columns in 1st matrix must be equal to the no. of rows in the 2nd matrix.\n");

	else
	{
		printf("Enter elements into second matrix of size %dx%d : ",r2,c2);
		for(row=1; row<=r2; row++)
		{
			for(col=1; col<=c2; col++)
			{
				scanf("%d",&m2[row][col]);
			}
		}

		r3 = r1;
		c3 = c2;
		add = c1; //or r2;

		for(row=1; row<=r3; row++)
		{
			for(col=1; col<=c3; col++)
			{
				sum = 0;
				for(element=1; element<=add; element++)
				{
					sum += m1[row][element] * m2[element][col];
				}
				mult[row][col] = sum;
				
			}
		}

		printf("Product of matrix A * B = \n");
		for(row=1; row<=r3; row++)
		{
			for(col=1; col<=c3; col++)
			{
				printf("%d ",mult[row][col]);
			}
			printf("\n");
		}

	}	

	return 0;
}