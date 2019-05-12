#include<stdio.h>
#include<math.h>

int main()

{
	int n,i,sum=0;

	printf("Enter the value of n : ");
	scanf("%d",&n);

	for(i=1; i<=n; i+=2)
	{
		sum += i;
	}
	printf("Sum of all the odd numbers between 1 and %d is : %d \n",n,sum);

	return 0;
}