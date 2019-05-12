#include<stdio.h>
#include<math.h>

int LCM(int,int);

int main()
{
	int a,b;

	printf("Enter two numbers to find their LCM : ");
	scanf("%d%d",&a,&b);

	printf("The LCM of %d and %d is : %d \n",a,b,LCM(a,b));

	return 0;
}

int LCM(int x,int y)
{
	int max,min,i;

	max = x>y ? x : y;
	min = x<y ? x : y;

	i = max;
	while(i<=x*y)
	{
		if(i%min==0)       //Eleminated the need to find divisor of 'y'
			break;

		i += max;
	}

	return i;
}