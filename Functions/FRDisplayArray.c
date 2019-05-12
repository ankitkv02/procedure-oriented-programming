#include<stdio.h>
#include<math.h>
#define MAX_SIZE 100

void Array(int arr[],int,int);

int main()
{
	int size,arr[MAX_SIZE],i;

	printf("Enter the array size : ");
	scanf("%d",&size);

	printf("Enter each individual element into the array one by one : ");
	for(i=1; i<=size; i++)
		scanf("%d",&arr[i]);
	

	printf("All the array elements : \n");
	Array(arr,1,size);

	return 0;
}

void Array(int arr[],int a,int b)
{
	if(a>b)
		return;

	printf("%d, ",arr[a]);

	return Array(arr,a+1,b);
}