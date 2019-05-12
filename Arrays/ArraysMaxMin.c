#include<stdio.h>
#include<math.h>
#include<limits.h>

#define MAX_SIZE 1000

int main()

{
	int arr[MAX_SIZE],size,i,min,max;

	printf("Define the size of the array : ");
	scanf("%d",&size);

	if(size>11)
		printf("Array size exceeded ! ");

	else
	{
		printf("Enter the individual elements of the array one by one : ");

		for(i=0; i<=size; i++)
			scanf("%d",&arr[i]);

		min = max = arr[0];

		for(i=1; i<=size; i++)
		{
			if(arr[i]>max)
				max = arr[i];

			if(arr[i]<min)
				min = arr[i];
		}
		printf("Minimum element = %d \n",min);
		printf("Maximum element = %d \n",max);
	}

	return 0;
}