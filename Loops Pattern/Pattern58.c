#include<stdio.h>
#include<math.h>

int main()

{
	int i,j,k,gape=0;

	for(i=1; i<=11; i+=gape)
	{
		for(j=i; j<=i+gape; j++)
		{	
			printf("%d ",j);			
		}
		printf("\n");
		gape += 1;	
	}
		
	return 0;
}