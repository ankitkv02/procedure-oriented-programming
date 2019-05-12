#include<stdio.h>
#include<math.h>

int main()

{
	int i,j;

	for(i=1; i<=9; i+=2)
	{
		for(j=1; j<i; j+=2)
		{
			printf(" ");
		}

		for(j=i; j<=9; j+=2)
		{
			printf("%d ",j);
		}
		printf("\n");
	}

	return 0;
}