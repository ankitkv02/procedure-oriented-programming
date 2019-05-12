#include<stdio.h>
#include<math.h>
#include<limits.h>
#define MAX_SIZE 1000

int main()

{
	int source[MAX_SIZE],size,i,dest[MAX_SIZE];

	printf("Define the size of array : ");
	scanf("%d",&size);

	if(size>MAX_SIZE)
		printf("Array size exceeded ! ");

	else
	{
		printf("Enter each individual element in the array one by one : ");
		for(i=1; i<=size; i++)
			scanf("%d",&source[i]);

		for(i=1; i<=size; i++)
			dest[i] = source[i];

		printf("Source Array : \n");
		for(i=1; i<=size; i++)
			printf("%d ",source[i]);

		printf("\nDestination Array : \n");
		for(i=1; i<=size; i++)
			printf("%d ",dest[i]);
		
	}
	printf("\n");

	return 0;
}