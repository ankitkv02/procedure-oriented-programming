#include<stdio.h>
#include<math.h>

int main()

{
	int i,j;

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=9; j++)
		{
			if(i==5 || j==1 || j==9)
				printf("5 ");

			else if(i==4 || j==2 || j==8)
				printf("4 ");

			else if(i==3 || j==3 || j==7)
				printf("3 ");

			else if(i==2 || j==4 || j==6)
				printf("2 ");

			else
				printf("1 ");
		}
		printf("\n");
	}

	return 0;
}