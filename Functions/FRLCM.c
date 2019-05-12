#include<stdio.h>
#include<math.h>

int LCM(int,int);

int main()
{
	int a,b,lcm;

	printf("Enter two numbers to find out their LCM : ");
	scanf("%d%d",&a,&b);
	
	lcm = (a<b) ? LCM(a,b) : LCM(b,a);

	printf("The LCM of %d and %d is : %d \n",a,b,lcm);

	return 0;
}

int LCM(int x,int y)
{	
	static int mult=0;

	mult += y;
	
	return (mult%x==0) ? mult : LCM(x,y);
}