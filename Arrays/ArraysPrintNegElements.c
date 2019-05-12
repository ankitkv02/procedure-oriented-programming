#include<stdio.h>
#include<math.h>
#include<limits.h>
#define MAX_SIZE 100

int main()

{
	int arr[MAX_SIZE],i,size;

	printf("Define the array size : ");
	scanf("%d",&size);

	if(size>MAX_SIZE)
		printf("Array size exceeded ! ");

	else
	{
		printf("Enter each individual element into the array one by one : \n");
		for(i=1; i<=size; i++)
			scanf("%d",&arr[i]);

		printf("All the negative elements in the array are : \n");
		for(i=1; i<=size; i++)		
			if(arr[i]<0)
				printf("%d \t",arr[i]);
		

	}

	return 0;
}