#include<stdio.h>
#define SIZE 10

void ReverseArray(int *x,int);

int main(){

	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int i;


	ReverseArray(a,SIZE);

	for(i=0; i<SIZE; i++){
		printf("%d ",a[i]);
	}
	printf("\n");

	return 0;
}

void ReverseArray(int *arr,int s){

	int swap;

	if(s==0 || s==1){
		return;
	} else{
		swap = *arr;
		*arr = *(arr+s-1);
		*(arr+s-1) = swap; 
	}

	return ReverseArray(arr+1,s-2);
}