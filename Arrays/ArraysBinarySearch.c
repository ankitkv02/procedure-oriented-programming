#include<stdio.h>
#include<math.h>
#include<limits.h>
#define MAX_SIZE 100

int main()

{
	int size,arr[MAX_SIZE],SearchElement,i,first,middle,last;

	printf("Define the array size : ");
	scanf("%d",&size);

	if(size>MAX_SIZE)
		printf("Array size exceeded ! ");

	else
	{
		printf("Enter each individual element into the array one by one : ");
		for(i=1; i<=size; i++)
			scanf("%d",&arr[i]);

		printf("Enter the element to be searched through the array : ");
		scanf("%d",&SearchElement);

		first = 1;
		last = size;
		middle = (first + last)/2;

		while(first <= last)
		{
			if(arr[middle] < SearchElement)			
				first = middle+1;

			else if(arr[middle] == SearchElement)
			{
				printf("%d found at %d index! \n",SearchElement,middle);
				break;
			}	

			else			
				last = middle-1;

			middle = (first + last)/2;
			
		}
		if(first > last)
			printf("%d not found! The element isn't in the array. \n",SearchElement);

	}

	return 0;
}