#include<stdio.h>
#include<math.h>

int main()

{
	int n,i,sum=0;

	printf("Enter the value of n : ");
	scanf("%d",&n);

	for(i=2; i<=n; i+=2)
	{
		sum += i;
	}
	printf("Sum of all the even numbers between 1 and %d = %d \n",n,sum);

	return 0;
}