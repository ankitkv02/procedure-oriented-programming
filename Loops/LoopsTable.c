#include<stdio.h>
#include<math.h>

int main()

{
	int n,i;

	printf("Enter a number to print its table : ");
	scanf("%d",&n);

	for(i=1; i<=10; i++)
	{
		printf("%d \n",n*i);
	} 

	return 0;
}