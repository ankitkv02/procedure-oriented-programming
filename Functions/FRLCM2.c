#include<stdio.h>
#include<math.h>

int LCM(int,int,int);

int main()
{
	int a,b,lcm,max;

	printf("Enter two numbers to find out their LCM : ");
	scanf("%d%d",&a,&b);

	if(a>b)
	{
		max = a;
		lcm = LCM(b,a,max);
	}

	else
	{
		max = b;
		lcm = LCM(a,b,max);
	}

	printf("The LCM of %d and %d is : %d \n",a,b,lcm);

	return 0;
}

int LCM(int x,int y,int mult)
{	
	mult += y;
	
	return (mult%x==0) ? mult : LCM(x,y,mult);
}