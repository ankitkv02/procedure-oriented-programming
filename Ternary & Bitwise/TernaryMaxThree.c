#include<stdio.h>
#include<math.h>

int main()

{
	int a,b,c,max;

	printf("Enter three numbers to find the greatest amongst them : ");
	scanf("%d%d%d",&a,&b,&c);

	max = (a>b && a>c) ? a : (b>c) ? b : c;

	printf("The greatest number amongst %d, %d and %d is : %d \n",a,b,c,max);

	return 0;
}