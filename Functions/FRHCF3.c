#include<stdio.h>
#include<math.h>

int HCF(int,int,int);

int main()
{
	int a,b,min;

	printf("Enter two numbers to find their HCF : ");
	scanf("%d%d",&a,&b);

	min = a<b ? a : b;

	printf("HCF of %d and %d is : %d \n",a,b,HCF(a,b,min));

	return 0;
}

int HCF(int x,int y,int fact)
{
	fact--;

	if((x%fact==0) && (y%fact==0))
		return fact;
	
	else
		return HCF(x,y,fact);
}