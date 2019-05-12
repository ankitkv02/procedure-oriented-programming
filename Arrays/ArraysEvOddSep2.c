#include<stdio.h>
#include<math.h>
#include<limits.h>
#define MAX_SIZE 100

int main()

{
	int size,master[MAX_SIZE],ev[MAX_SIZE],odd[MAX_SIZE],i,j=0,k=0;

	printf("Define the array size : ");
	scanf("%d",&size);

	if(size>MAX_SIZE)
		printf("Array size exceeded ! ");

	else
	{
		printf("Enter each individual element into the array one by one : ");
		for(i=1; i<=size; i++)		
			scanf("%d",&master[i]);

		for(i=1; i<=size; i++)
		{	
			if(master[i] & 1)
			{
				j++;
				odd[j] = master[i];				
			}
			else
			{
				k++;
				ev[k] = master[i];				
			}
		}
		printf("Array of even : \n");
		for(i=1; i<=k; i++)
			printf("%d \n",ev[i]);

		printf("Array of odd : \n");
		for(i=1; i<=j; i++)
			printf("%d \n",odd[i]);
	}

	return 0;
}