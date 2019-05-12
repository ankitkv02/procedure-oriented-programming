#include<stdio.h>

int main()

{
	int arr[20],size,i,min;

	printf("Define the size the array : ");
	scanf("%d",&size);

	if(size>20+1)
		printf("Array size ecceeded ! ");

	else
	{
		printf("Enter each individual element of the array one by one : ");

		for(i=0; i<=size; i++)
			scanf("%d",&arr[i]);

		min = arr[0];

		for(i=1; i<=size; i++)
		{
			if(arr[i]<min)
				min = arr[i];
		}
		printf("The smallest element of the array is : %d \n",min);
	}

	return 0;
}