#include<stdio.h>
#include<math.h>
#include<limits.h>

#define MAX_SIZE 1000

int main()

{ 
	int arr[MAX_SIZE],size,i,max,secmax;

	printf("Define the size of array : ");
	scanf("%d",&size);

	if(size>MAX_SIZE+1)
		printf("Array size exceeded ! ");

	else
	{
		printf("Enter each individual element of the array one by one : ");

		for(i=0; i<=size; i++)
			scanf("%d",&arr[i]);

		max = secmax = INT_MIN;

		for(i=0; i<=size; i++)
		{
			if(arr[i]>max)
			{
				secmax = max;
				max = arr[i];
			}
			else if(arr[i]>secmax && arr[i]<max)
				secmax = arr[i];
					
		}
		printf("The greatest element ever inserted in the array is : %d \n",max);
		printf("The second greatest element is : %d \n",secmax);
	}

	return 0;
}