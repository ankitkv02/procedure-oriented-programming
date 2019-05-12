#include<stdio.h>
#include<math.h>

int main()

{
	int n,i;

	printf("Enter the value of n to print Natural numbers : ");
	scanf("%d",&n);

	for (i=1; i<=n; i++)
		printf("%d \n",i);
	
	return 0;
}