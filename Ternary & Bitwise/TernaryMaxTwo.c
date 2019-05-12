#include<stdio.h>
#include<math.h>

int main()

{
	int a,b,max;

	printf("Enter two numbers to find the greater between those two : ");
	scanf("%d%d",&a,&b);

	max = (a>b) ? a : b;

	printf("The greater number between %d and %d, is : %d \n",a,b,max);

	return 0;
}