#include<stdio.h>
#include<math.h>

int HCF(int,int);

int main()
{
	int a,b;

	printf("Enter two numbers to find their HCF : ");
	scanf("%d%d",&a,&b);

	printf("The HCF od %d and %d is : %d \n",a,b,HCF(a,b));

	return 0;
}

int HCF(int x,int y)
{
	int min;

	min = x<y ? x : y;

	while(min>0)
	{
		if(x%min==0 && y%min==0)
			break;
		
		min--;
	}
	
	return min;
}