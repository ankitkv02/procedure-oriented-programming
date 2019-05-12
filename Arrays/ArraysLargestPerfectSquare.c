#include<stdio.h>
#define MAX 100

int isPerfectSquare(int);

int main()
{
	int arr[MAX],size,i,j,start,lps;

	printf("Enter the array size : ");
	scanf("%d",&size);

	if(size > MAX)
		printf("Array size exceeded! \n");

	else
	{
		printf("Enter elements into the array one by one : ");
		for(i=1; i<=size; i++)
			scanf("%d",&arr[i]);

		for(i=1; i<=size; i++)
		{
			if(isPerfectSquare(arr[i]))
			{
				lps = arr[i];
				start = i+1;

				for(j=start; j<=size; j++)
				{
					if(isPerfectSquare(arr[j]) && arr[j] > lps)
					{
						lps = arr[j];
					}

				}
				break;

			}

		}

		printf("Largest perfect square in the array is : %d \n",lps);
	}

	return 0;
}

int isPerfectSquare(int a)
{
	int i;

	for(i=0; i<=a/2; i++)
	{
		if(i*i == a)
			return 1;
	}

	return 0;
}