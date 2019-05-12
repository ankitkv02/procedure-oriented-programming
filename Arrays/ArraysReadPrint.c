#include<stdio.h>
#include<math.h>

int main()

{
	int arr[10],n,i;

	printf("Enter the number of elements n : ");
	scanf("%d",&n);
	
	if(n>11)
		printf("Size of array ecceeded ! \n");

	else
	{
		printf("Enter each individual element one by one : ");

		for(i=0; i<n; i++)
			scanf("%d",&arr[i]);
		

		for(i=0; i<=n; i++)
			printf("%d",arr[i]);
	}	
		
	return 0;
}