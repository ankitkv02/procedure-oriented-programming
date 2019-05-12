#include<stdio.h>
#include<math.h>
#include<limits.h>

#define MAX_SIZE 1000

int main()

{
	int arr[MAX_SIZE],size,i,max,secmax,thirdmax;

	printf("Define the size of the array : ");
	scanf("%d",&size);

	if(size>MAX_SIZE)
		printf("Array size exceeded ! ");

	else
	{
		printf("Enter each individual element of the array one by one : ");
		for(i=1; i<=size; i++)
			scanf("%d",&arr[i]);

		max = secmax = thirdmax = INT_MIN;

		for(i=1; i<=size; i++)
		{
			if(arr[i]>max)
			{
				thirdmax = secmax;
				secmax = max;
				max = arr[i];
			}

			else if(arr[i]>secmax && arr[i]<max)
				secmax = arr[i];
			

			else if(arr[i]>thirdmax && arr[i]<secmax)		
				thirdmax = arr[i];
			
		}
		printf("The third largest element is : %d \n",thirdmax);
		printf("The second largest element is : %d \n",secmax);
		printf("The largest element is : %d \n",max);
	}


	return 0;
}