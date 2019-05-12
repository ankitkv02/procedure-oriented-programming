#include<stdio.h>
#include<math.h>

int main()

{
	int i,j;

	for(i=1; i<=5; i++)
	{
		for(j=i; j>1; j--)
		{
			printf("%d",j);				
		}
			

		for(j=1; j<=6-i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}

	return 0;
}