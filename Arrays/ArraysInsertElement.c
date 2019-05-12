#include<stdio.h>
#include<math.h>
#include<limits.h>
#define MAX_SIZE 1000

int main()

{
	int arr[MAX_SIZE],size,i,element,position;

	printf("Define the array size : ");
	scanf("%d",&size);

	if(size>MAX_SIZE)
		printf("Array size exceeded ! ");

	else
	{
		printf("Enter each individual element into the array one by one : ");
		for(i=1; i<=size; i++)
			scanf("%d",&arr[i]);

		printf("Enter the element you want inserted : ");
		scanf("%d",&element);

		printf("And enter the position you want the element to be inserted on : ");
		scanf("%d",&position);

		if(position>size || position<=0)
			printf("Invalid position! Please enter position between 1 to %d",size);

		else
		{
			for(i=size; i>=position; i--)
				arr[i+1] = arr[i];
		}

		arr[position] = element;
		size++;

		printf("Modified array : \n");
		for(i=1; i<=size; i++)
			printf("%d \n",arr[i]);
	}

	return 0;
}