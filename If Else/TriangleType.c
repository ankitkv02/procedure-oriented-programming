#include<stdio.h>

int main()
{
	int side1, side2, side3;
	printf("Enter the three sides of the tringle : ");
	scanf("%d%d%d",&side1,&side2,&side3);

	if (side1==side2 && side2==side3)
	{
		printf("The tringle is Equilateral.\n");
	}
	else if (side1==side2 || side1==side3 || side2==side3)
	{
		printf("The triangle is Isosceles.\n");
	}	
	else 
	{
		printf("The triangle is Scelene.\n");
	}	

	return 0;
}