#include<stdio.h>
#include<math.h>
#define MAX_SIZE 100

int ArrayMax(int arr[],int,int);
int ArrayMin(int arr[],int,int);

int main()
{
	int size,arr[MAX_SIZE],i,min,max,start=1;

	printf("Enter the array size : ");
	scanf("%d",&size);

	printf("Enter each individual element into the array one by one : ");
	for(i=start; i<=size; i++)
		scanf("%d",&arr[i]);

	printf("%d and %d \n",ArrayMin(arr,start,size),ArrayMax(arr,start,size));

	return 0;
}

int ArrayMin(int arr[],int x,int y)
{
	int min;
	
	if(x>y-2)
		return (arr[x] < arr[x+1]) ? arr[x] : arr[x+1];
	
	min = ArrayMin(arr,x+1,y);

	return arr[x] < min ? arr[x] : min;

}

int ArrayMax(int arr[],int a,int b)
{
	int max;
	
	if(a>b-2)
		return (arr[a] > arr[a+1]) ? arr[a] : arr[a+1];	

	max = ArrayMax(arr,a+1,b);

	return arr[a] > max ? arr[a] : max;

}