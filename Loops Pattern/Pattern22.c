#include<stdio.h>
#include<math.h>

int main()

{
	int i,j;

	for(i=5; i>=1; i--)
	{	
		for (j=i; j<=5; j++)
		{
			printf("%d",j);
		}  

		for (j=i; j>1; j--)
		{
			printf("5");
		}  
		printf("\n");
	}

	return 0;
}