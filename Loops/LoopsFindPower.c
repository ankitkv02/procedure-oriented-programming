#include<stdio.h>
#include<math.h>

int main()

{
	int base,exponant,i;
	long long sum = 1;

	printf("Enter the value of the number : ");
	scanf("%d",&base);

	printf("Enter the value of exponant : ");
	scanf("%d",&exponant);

	if(exponant == 0)	
		printf("%d to the power %d is : 1 \n",base,exponant);		
	

	else if(exponant == 1)	
		printf("%d to the power %d is : %d \n",base,exponant,base);
	
	else
	{	
		for(i=1; i<=exponant; i++)		
			sum = sum * base;
				
		printf("%d to the power %d is : %lld \n",base,exponant,sum);
	}
		
	return 0;
}