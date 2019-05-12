#include<stdio.h>
#include<math.h>

int main()

{
	int arr[10],n,i,sum=0;

	printf("Define the size of array : ");
	scanf("%d",&n);

	if(n>11)
		printf("The size of array ecceded ! \n");

	else
	{
		printf("Enter each individual element one by one : ");

		for(i=0; i<=n; i++)
			scanf("%d",&arr[i]);

		for(i=0; i<=n; i++)

			sum = sum+arr[i];

			printf("The sum of all the integer elements inserted in the array is : %d \n",sum);

	}

	return 0;
}