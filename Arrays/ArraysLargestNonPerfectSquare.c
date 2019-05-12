#include<stdio.h>
#define max 100

int isNotPerfectSquare(int);

int main()
{
	int size,arr[max],i,j,start,lnps;

	printf("Enter array size : ");
	scanf("%d",&size);

	if(size > max)
		printf("Array size exceeded ! \n");

	else
	{
		printf("Enter elements into the array one by one : ");
		for(i=1; i<=size; i++)
			scanf("%d",&arr[i]);

		for(i=1; i<=size; i++)
		{
			if(isNotPerfectSquare(arr[i]))
			{
				lnps = arr[i];
				start = i+1;

				for(j=start; j<=size; j++)
				{
					if(isNotPerfectSquare(arr[j]) && arr[j] > lnps)
					{
						lnps = arr[j];
					}
				}
				break;
			}

		}

		printf("%d is found out to be the largest Non-Perfect-Square number! \n",lnps);
	}

	return 0;
}

int isNotPerfectSquare(int p)
{
	int i;

	for(i=0; i<=p/2; i++)
	{
		if(i*i == p)
			return 0;
	}

	return 1;
}