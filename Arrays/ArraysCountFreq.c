#include<stdio.h>
#include<math.h>
#include<limits.h>
#define MAX_SIZE 100

int main()

{
	int arr[MAX_SIZE],size,i,j,count,freq[MAX_SIZE];

	printf("Define array size : ");
	scanf("%d",&size);

	if(size>MAX_SIZE)
		printf("Array size exceeded ! ");

	else
	{
		printf("Enter each individual element into the array one by one : ");
		for(i=1; i<=size; i++)
		{
			scanf("%d",&arr[i]);
			freq[i] = -1;
		}

		for(i=1; i<=size; i++)
		{
			count = 1;
			for(j=i+1; j<=size; j++)
			{
				if(arr[i] == arr[j])
				{
					count++;
					freq[j] = 0;
				}
			}
			if(freq[i] != 0)		
				freq[i] = count;
			
		}
		for(i=1; i<=size; i++)	
			if(freq[i] != 0)
				printf("%d occurs %d times! \n",arr[i],freq[i]);
		
	}

	return 0;
}		