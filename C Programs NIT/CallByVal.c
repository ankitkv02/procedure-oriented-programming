#include<stdio.h>
#define size 5

void Swap(int,int);

int main(){

	int a=10, b=20;

	int* c = &a;
	printf("%p \n",&a);
	printf("%p \n",c);
	printf("%p \n",&b);
	printf("%p \n",&c);
	
	printf("Value of a before swapping : %d \n",a);
	printf("Value of b before swapping : %d \n",b);

	Swap(a,b); //Call by value >>> does't get swapped

	printf("Value of a after swapping : %d \n",a);
	printf("Value of b after swapping : %d \n",b);

	return 0;
}

void Swap(int x,int y){

	int temp = x;

	x = y;
	y = temp;
}