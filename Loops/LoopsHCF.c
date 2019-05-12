#include<stdio.h>
#include<math.h>

int main()

{
	int num1,num2,i,min,HCF=0;

	printf("Enter two numbers to find their HCF/GCD : ");
	scanf("%d%d",&num1,&num2);

	min = (num1<num2) ? num2 : num1;

	for(i=1; i<=min; i++)
		if(num1%i == 0 && num2%i == 0)
		{
			HCF = i;
		}

	printf("The HCF of %d and %d, is : %d \n",num1,num2,HCF);	

	return 0;
}