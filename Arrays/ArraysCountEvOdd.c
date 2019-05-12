#include<stdio.h>
#include<math.h>
#include<limits.h>
#define MAX_SIZE 100

int main()

{
	int arr[MAX_SIZE],size,i,Negcount=0,Poscount=0;

	printf("Define the array size : ");
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
			if(arr[i]<0)
			{
				Negcount++;
			}
		}
		Poscount = size - Negcount;
		printf("Number of positive elememts in the array : %d \n",Poscount);
		printf("Number of negative elememts in the array : %d \n",Negcount);
	}	

	return 0;
}