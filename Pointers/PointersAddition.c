#include<stdio.h>

int main(){

	int a,b,sum;
	int *ptr1,*ptr2;

	ptr1 = &a;
	ptr2 = &b;

	printf("Enter two numbers to print their sum : ");
//	scanf("%d%d",&a,&b);
	scanf("%d%d",ptr1,ptr2);

	sum = *ptr1 + *ptr2;

	printf("Sum of %d and %d is - %d \n",*ptr1,*ptr2,sum);
//	printf("Sum of %d and %d is - %d \n",a,b,sum);

	return 0;
}