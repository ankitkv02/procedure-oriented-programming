#include<stdio.h>
#include<math.h>

int main()
{
	int a,b;
	float c,d;

	printf("Enter two Integer numbers : ");
	scanf("%d%d",&a,&b);

	printf("Enter two Float numbers : ");
	scanf("%f%f",&c,&d);

	printf("Sum of %d and %d = %d \nDifference of %d and %d = %d\n",a,b,a+b,a,b,a-b);
	printf("Sum of %f and %f = %f \nDifference of %f and %f = %f\n",c,d,c+d,c,d,c-d);

	return 0;
}