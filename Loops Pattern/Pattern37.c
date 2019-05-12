#include<stdio.h>
#include<math.h>

int main()

{
	int i,j,k,l;

	for(i=1; i<=5; i++)
	{
		if(i%2==0)
		{
			k = 2;
			l = 2*i;
		}
			
		else
		{
			k = 1;
			l = 2*i - 1;
		}
			
		for(j=k; j<=l; j+=2)
		{
			printf("%d",j);
		}
		printf("\n");
	}

	return 0;
}