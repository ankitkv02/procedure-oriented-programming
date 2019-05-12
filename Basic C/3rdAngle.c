#include<stdio.h>

int main()

{
	int FA,SA,TA;
	printf("\n Enter the value of FirstAngle : \n");
	scanf("%d",&FA);

	printf("\n Enter the value of SecondAngle : \n");
	scanf("%d",&SA);

	TA = 180-(FA+SA);

	printf("\n Third Angle : %d degrees \n", TA);

	return 0;

}