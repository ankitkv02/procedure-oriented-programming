#include<stdio.h>
#include<math.h>

int Cube (int);

int main()

{
	int a;

	printf("Enter a number : ");
	scanf("%d",&a);

	printf("Cube of %d is : %d \n",a,Cube(a));

	return 0;
}

int Cube (x)
{
	return x*x*x;
}