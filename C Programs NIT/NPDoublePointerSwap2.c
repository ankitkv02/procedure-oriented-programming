#include<stdio.h>

void Swap(int**,int**);

int main(){

	int a,b;
	int *pta,*ptb;

	printf("Enter two values to perform swap : ");
	scanf("%d%d",&a,&b);

	printf("Addresses before swap : \nA = %d\nB = %d\n",a,b);

	pta = &a;
	ptb = &b;

	Swap(&pta,&ptb);

	printf("Addresses after swap : \nA = %d\nB = %d\n",a,b);
	
	return 0;
}

void Swap(int** x,int** y){

	int ptr;

	ptr = **x;
	**x = **y;
	**y = ptr;
}