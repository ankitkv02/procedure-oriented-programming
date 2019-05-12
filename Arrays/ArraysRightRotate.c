#include<stdio.h>
#include<math.h>
#define max 100

void PrintArray(int arr[],int);
void RightRotArray(int arr[],int);

int main()
{
	int size,arr[max],N,i;

	printf("Enter the array size : ");
	scanf("%d",&size);

	if(size > max)
		printf("Array size exceeded! \n");

	else
	{
		printf("Enter each individual element into the array one by one : ");
		for(i=1; i<=size; i++)
			scanf("%d",&arr[i]);

		printf("Enter the number of times you want to Right-Rotate the array : ");
		scanf("%d",&N);

		printf("Array before rotation : ");
		PrintArray(arr,size);

		N = N % size;

		for(i=1; i<=N; i++)
			RightRotArray(arr,size);

		printf("Array After rotation : ");
		PrintArray(arr,size);

	}

	return 0;
}

void PrintArray(int arr[],int l)
{
	int i;

	for(i=1; i<=l; i++)
		printf("%d ",arr[i]);

	printf("\n");
}

void RightRotArray(int arr[],int f)
{
	int swap,i;

	swap = arr[f];

	for(i=f; i>=2; i--)
		arr[i] = arr[i-1];

	arr[1] = swap;
}