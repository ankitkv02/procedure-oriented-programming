#include<stdio.h>
#include<math.h>

int MaxMin (int,int);
int main()

{
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);

	if (a==b)
		printf("Both the numbers are equal. \n");
	
	else
	{
		printf("%d is the greater number between %d and %d. \n",MaxMin(a,b),a,b);

	}
		
	return 0;
}

int MaxMin (int x,int y)
{
	return (x>y) ? x : y;
}