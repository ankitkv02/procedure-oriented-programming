#include<stdio.h>
#include<stdlib.h>

int* Increment(int);

int main(){

	int a;
	int *p;

	printf("Enter a number : ");
	scanf("%d",&a);

	p = Increment(a);

	printf("The incremented value is : %d \n",*p);
	free(p);
	p = 0;

	return 0;
}

int* Increment(int m){

	int temp;
	int *ptr/* = &temp*/;
	ptr = (int*)malloc(sizeof(int));
	/*temp = m+1;*/
	*ptr = m+1;

	return ptr;
}