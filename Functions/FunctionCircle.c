#include<stdio.h>
#include<math.h>

float CircleDia (float);
float CircleCircum (float);
float CircleArea (float);

int main()

{
	float r;

	printf("Enter the Radius R : ");
	scanf("%f",&r);

	printf("Circle Diameter D : %.2f \nCircle Circumference C : %.2f \nCircle Area A : %.2f \n",CircleDia (r), CircleCircum (r), CircleArea (r));

	return 0;
}

float CircleDia (float r)
{
	return (2*r);
}

float CircleCircum (float r)
{
	return (2*3.14*r);
}

float CircleArea (float r)
{
	return (3.14*r*r);
}