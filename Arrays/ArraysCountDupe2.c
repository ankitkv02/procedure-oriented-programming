#include<stdio.h>
#include<math.h>
#include<limits.h>
#define MAX_SIZE 100

int main()

{
	int arr[MAX_SIZE],size,i,j,count,freq[MAX_SIZE],TotDupe=0,DupeCount=0,UniCount=0;

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
			if(freq[i] > 1)
				TotDupe += freq[i];

		for(i=1; i<=size; i++)
			if(freq[i] == 1)
				UniCount++;

		printf("\nThere are %d unique elements (i.e., which do not repeat) \n",UniCount);	

		printf("Which are : \n");
		for(i=1; i<=size; i++)
			if(freq[i] == 1)
				printf("%d \n",arr[i]);	

		for(i=1; i<=size; i++)
			if(freq[i]>1)
				DupeCount++;

		printf("\n%d elements repeat themselves(i.e., appear more than once) \n",DupeCount);

		printf("Which are : \n");
		for(i=1; i<=size; i++)
			if(freq[i]>1)
				printf("\n%d -repeats %d times! ",arr[i],freq[i]);
	
		printf("\n \nWhich means there are %d duplicate elements in total. \n",TotDupe);
		printf("Kindly note that the sum of duplicate elements and the unique elements will always be equal to the size of the array. \n");	
		
	}
	printf("\n");

	return 0;
}		