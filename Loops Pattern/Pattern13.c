#include<stdio.h>
#include<math.h>

int main()

{
	int i,j;

	for (i=1; i<=5; i++)
	{
		for (j=1; j<=5; j++)
		{
			if ((i==1 && (j==1 || j==5)) || (i==5 && (j==1 || j==5)))
			printf("1");

			else if ((i==2 && (j==2 || j==4)) || (i==4 && (j==2 || j==4)))
			printf("1");

			else if (i==3 && j==3)
			printf("1");

			else
			printf("0"); 
		}
		printf("\n");
	}

	return 0;
}