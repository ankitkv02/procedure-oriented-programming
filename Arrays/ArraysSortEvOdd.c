#include<stdio.h>
#include<math.h>
#include<limits.h>
#define MAX_SIZE 100

int main()

{
	int size,arr[MAX_SIZE],i,j,end,start,swap1,swap2,EvCount,OddCount;

	printf("Define the array size : ");
	scanf("%d",&size);

	if(size>MAX_SIZE)
		printf("Array size exceeded ! ");

	else
	{
		printf("Enter each individual element into the array one by one : ");
		for(i=1; i<=size; i++)		
			scanf("%d",&arr[i]);

		for(i=1; i<=size; i++)
		{	
			for(j=i+1; j<=size; j++)
			{
				if(arr[j] < arr[i])
				{
					swap1 = arr[i];
					arr[i] = arr[j];
					arr[j] = swap1;
				}
			}
		}

		start = 0;
		for(i=1; i<=size; i++)
		{	
			if(arr[i]%2==0)
			{
				start++;
				swap2 = arr[i];
				end = i;
				
				for(j=end; j>=start; j--)
				{
					arr[j] = arr[j-1];
				}
					
				arr[start] = swap2;
							
			}
			EvCount = start;										
		}	
		OddCount = size - EvCount;

		printf("Total elements inserted - %d \nEven elements - %d \nOdd elements - %d \n",size,EvCount,OddCount);
		printf("The sorted array with even elements first and odd later, is ready and here - \n");
		for(i=1; i<=size; i++)
			printf("%d, ",arr[i]);

		printf("\n");

	}

	return 0;
}