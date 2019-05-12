#include<stdio.h>
#include<math.h>

int main()

{
	int i,j;

	for(i=1; i<=21; i+=5)
	{
		for(j=i; j<=i+4; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}

	return 0;
}