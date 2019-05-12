#include<stdio.h>
#include<math.h>

int main()

{
	int i,j;

	for(i=5; i>=1; i--)
	{
		for(j=i; j<5; j++)
		{
			printf(" ");
		}

		for(j=1; j<=i; j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}


	return 0;
}