#include<stdio.h>
#include<math.h>
#define MAX_SIZE 100

int SumArray(int arr[],int,int);

int main()
{
	int size,arr[MAX_SIZE],i;

	printf("Enter the array size : ");
	scanf("%d",&size);

	printf("Enter each individual element into the array one by one : ");
	for(i=1; i<=size; i++)
		scanf("%d",&arr[i]);
	
	printf("The sum of all the array elements is : %d \n",SumArray(arr,1,size));

	return 0;
}

int SumArray(int arr[],int a,int b)
{
	if(a==b)
		return arr[b];

	return arr[a]+SumArray(arr,a+1,b);
}