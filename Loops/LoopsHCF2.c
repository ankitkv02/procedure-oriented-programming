#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,temp,HCF;

	printf("Enter two numbers to find out their HCF : ");
	scanf("%d%d",&a,&b);

	while(b!=0)
	{
		temp = b;
		b = a%b;				
		a = temp;				// Program to find HCF/GCD using euclidean algorithm
	}

	if(b==0)
		HCF = a;

	printf("%d \n",HCF);
	return 0;
}