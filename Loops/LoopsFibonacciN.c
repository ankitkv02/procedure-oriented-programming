#include<stdio.h>
#include<math.h>

int main()

{
	int n,i,a,b,c;

	printf("Enter the number of terms of the Fibonacci series to be printed : ");
	scanf("%d",&n);

	a = 0;
	b = 1;
	c = 0;

	printf("Fibonacci series from 0 to %d, is : \n",n);

	for(i=1; i<=n; i++)
	{	
		printf("%d, ",c);
		
		a = b;		
		b = c;
		c = a + b;
		
	}
	printf("\n");
	return 0;
}