#include<stdio.h>
#define MXSZ 10

void getNEvenNumbers(int *);

int main(){

	int arr[MXSZ];
	int *p = arr;
	int *endArr = p+MXSZ;

	getNEvenNumbers(arr);

	printf("First %d even numbers - \n",MXSZ);
	while(p < endArr){
		printf("%d ",*(p++));
	}
	printf("\n");

	return 0;
}

void getNEvenNumbers(int *ptr){

	int *endArr = ptr+MXSZ;
	int i;
	
	i = 0;
	while(ptr < endArr){
		*(ptr++) = 2*((i++)+1);
	}
}