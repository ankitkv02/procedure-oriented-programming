#include<stdio.h>
#include<math.h>

int main()

{
	int i,j;

	for (i=1; i<=5; i++)
	{
		for (j=5; j>i; j--)
		{
			printf(" ");
		} 	

		for (j=i; j<=(2*i)-1; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}

	return 0;
}