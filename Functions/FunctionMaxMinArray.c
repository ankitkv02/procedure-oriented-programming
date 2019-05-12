#include<stdio.h>
#include<math.h>
#define MAX_SIZE 100

void MaxMinArray(int arr[],int,int);

int main()
{
	int size,arr[MAX_SIZE],i,start=1;

	printf("Enter the array size : ");
	scanf("%d",&size);

	printf("Enter each individual element into the array one by one : ");
	for(i=start; i<=size; i++)
		scanf("%d",&arr[i]);

	MaxMinArray(arr,start,size);

	return 0;
}

void MaxMinArray(int arr[],int x,int y)
{
	int i,j,max,swap;

	for(i=x; i<=y; i++)
		for(j=i+1; j<=y; j++)
		{
			if(arr[j] < arr[i])				//Array sorting in ascending order.
			{
				swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
		}

	printf("The array sorted in ascending order is - \n");	
	for(i=x; i<=y; i++)
		printf("%d, ",arr[i]);	
	
	printf("\nThe minimum and maximum elements in the array are %d and %d respectively. \n",arr[x],arr[y]);

}