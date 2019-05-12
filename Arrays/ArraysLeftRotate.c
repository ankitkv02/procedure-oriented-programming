#include<stdio.h>
#include<math.h>
#define MAX_SIZE 100

void LeftRotArray(int arr[],int);
void PrintArray(int arr[],int);

int main()
{
	int i,size,arr[MAX_SIZE],N;

	printf("Enter the array size : ");
	scanf("%d",&size);

	if(size > MAX_SIZE)
		printf("Array size exceeded! \n");

	else
	{	
		printf("Enter each individual element into the array one by one : ");
		for(i=1; i<=size; i++)
			scanf("%d",&arr[i]);
		
		printf("Enter number of times you want to Left-Rotate the array : ");
		scanf("%d",&N);	

		printf("Array before rotation : ");
		PrintArray(arr,size);

		N = N % size;

		for(i=1; i<=N; i++)
			LeftRotArray(arr,size);

		printf("Array after rotation : ");
		PrintArray(arr,size);

	}	
		
	return 0;
}

void LeftRotArray(int arr[],int s)
{
	int i,swap;

	swap = arr[1];

	for(i=1; i<s; i++)
		arr[i] = arr[i+1];
	
	arr[s] = swap;
}

void PrintArray(int arr[],int x)
{
	int i;

	for(i=1; i<=x; i++)
		printf("%d ",arr[i]);

	printf("\n");
}