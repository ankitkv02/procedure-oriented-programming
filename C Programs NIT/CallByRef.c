#include<stdio.h>

void swap(int*,int*);

int main(){

	int a=10, b=20;

	printf("Value of a before swapping : %d \n",a);
	printf("Value of b before swapping : %d \n",b);

	swap(&a,&b);      // Call by reference >> Successful swapping operation!

	printf("Value of a after swapping : %d \n",a);
	printf("Value of b after swapping : %d \n",b);

	return 0;
}

void swap(int* x, int* y){

	int temp = *x;

	*x = *y;
	*y = temp;

//	printf("a = %d \n",*x);
//	printf("b = %d \n",*y);
}