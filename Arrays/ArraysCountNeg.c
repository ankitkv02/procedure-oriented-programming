#include<stdio.h>
#include<math.h>
#include<limits.h>
#define MAX_SIZE 100

int main()

{
	int arr[MAX_SIZE],size,i,Negcount=0;

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
			if(arr[i]<0)
				Negcount++;
		}
		printf("The number of negtive elements in the array is : %d \n",Negcount);
	}

	return 0;
}