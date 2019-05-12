#include<stdio.h>
#include<math.h>
#include<limits.h>
#define MAX_SIZE 1000

int main()

{
	int arr1[MAX_SIZE],arr2[MAX_SIZE],arr3[MAX_SIZE],i,size1,size2,size3;

	printf("Define the array size of first array : ");
	scanf("%d",&size1);

	printf("Enter each individual element into Array1 one by one : ");
	for(i=1; i<=size1; i++)
		scanf("%d",&arr1[i]);

	printf("Define the array size of second array : ");
	scanf("%d",&size2);

	printf("Enter each individual element into Array2 one by one : ");
	for(i=1; i<=size2; i++)
		scanf("%d",&arr2[i]);

	size3 = size1 + size2;

	for(i=1; i<=size1; i++)	
		arr3[i] = arr1[i];		
	
	for(i=1; i<=size2; i++)			
		arr3[size1+i] = arr2[i];		
	
	printf("The third array is ready and here! : \n");
	for(i=1; i<=size3; i++)
		printf("%d \n",arr3[i]);

	return 0;
}