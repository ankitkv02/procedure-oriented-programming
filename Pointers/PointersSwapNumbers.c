#include<stdio.h>

void Swap(int *p1,int *p2);

int main(){

	int a,b;
	int *ptr1,*ptr2;

	ptr1 = &a;
	ptr2 = &b;

	printf("Enter two numbers to perform swap operation on them : ");
	scanf("%d%d",ptr1,ptr2);

	printf("(InMain) Numbers before swapping - \n%d and %d \n",*ptr1,*ptr2);

	Swap(ptr1,ptr2);

	printf("(InMain) Numbers after swapping - \n%d and %d \n",*ptr1,*ptr2);

	return 0;
}

void Swap(int *x,int *y){
	
	int temp;

	printf("(InFunc) before - \n%d and %d \n",*x,*y);

	temp = *x;
	*x = *y;
	*y = temp;

	printf("(InFunc) after - \n%d and %d \n",*x,*y);
}