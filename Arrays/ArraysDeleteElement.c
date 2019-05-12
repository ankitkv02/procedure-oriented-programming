#include<stdio.h>
#include<math.h>
#include<limits.h>
#define MAX_SIZE 1000

int main()

{
	int i,arr[MAX_SIZE],size,position;

	printf("Define the array size : ");
	scanf("%d",&size);

	if(size>MAX_SIZE)
		printf("Array size exceeded ! ");

	else
	{
		printf("Enter each individula element into the array one by one : ");
		for(i=1; i<=size; i++)
			scanf("%d",&arr[i]);

		printf("Enter the position of the element you want removed : ");
		scanf("%d",&position);

		if(position>size || position<=0)
			printf("Invalid position! Please enter a position between 1 and %d.",size);

		else
		{
			for(i=position; i<=size; i++)
				arr[i] = arr[i+1];

			size--;
		}
		printf("Modified Array : \n");
		for(i=1; i<=size; i++)
			printf("%d \n",arr[i]);
		
	}

	return 0;
}