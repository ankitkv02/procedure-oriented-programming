#include<stdio.h>
#include<math.h>
#include<limits.h>
#define MAX_SIZE 100

int main()

{
	int size,arr[MAX_SIZE],i,j,swap;

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
					swap = arr[i];
					arr[i] = arr[j];
					arr[j] = swap;
				}
			}
		}	
		printf("The sorted array in ascending order is : ");	
		for(i=1; i<=size; i++)
			printf("%d \n",arr[i]);

	}
	printf("\n");

	return 0;
}