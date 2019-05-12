#include<stdio.h>
#include<math.h>
#include<limits.h>
#define MAX_SIZE 100

int main()

{
	int arr[MAX_SIZE],size,i,j,k;

	printf("Define array size : ");
	scanf("%d",&size);

	if(size>MAX_SIZE)
		printf("Array size exceeded ! ");

	else
	{
		printf("Enter each individual element into the array one by one : ");
		for(i=1; i<=size; i++)
			scanf("%d",&arr[i]);

		for(i=1; i<=size; i++)
		{
			for(j=i+1; j<=size; j++)
			{
				if(arr[i] == arr[j])
				{
					for(k=j; k<=size; k++)
					{
						arr[k] = arr[k+1];
					}
					size--;
					// Just in case element shifting occurs, don't increase j.
					j--; 
				}
				
			}
		}
		printf("The modified array without duplicate elements is : \n");
		for(i=1; i<=size; i++)
			printf("%d \n",arr[i]);

	}

	return 0;
}		