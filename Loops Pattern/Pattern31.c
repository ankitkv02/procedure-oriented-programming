#include<stdio.h>
#include<math.h>

int main()

{
	int i,j;

	for(i=1; i<=5; i++)
	{
		for(j=i; j>1; j--)
		{
			printf("%d",i);
		}
		
		for(j=i; j<=5; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}

	return 0;
}