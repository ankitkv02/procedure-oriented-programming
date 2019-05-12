#include<stdio.h>
#include<math.h>

int main()

{
	int i,n,sum=0;

	printf("Enter the value of n : ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		sum += i;
	}
	printf("Sum of all the natural between 1 and %d is : %d \n",n,sum);

	return 0;
}