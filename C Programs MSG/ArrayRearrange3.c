/*Write a program in C to update every array element with multiplication
of previous and next numbers in array.*/

#include<stdio.h>
#define MXSZ 100

void createArray(int*,int);
void printArray(int*,int);
void rearrangeArray(int*,int);

int main(){

	int arr[MXSZ],sz;

	printf("Define array size : ");
	scanf("%d",&sz);

	createArray(arr,sz);

	printf("Original array - \n");
	printArray(arr,sz);

	rearrangeArray(arr,sz);

	printf("Array after rearrangement - \n");
	printArray(arr,sz);

	return 0;
}

void createArray(int *brr,int s){

	printf("Enter elements into the array - \n");
	for(int i=0; i<s; ++i){
		scanf("%d",brr+i);
	}
}

void printArray(int *prr,int l){

	for(int i=0; i<l; ++i){
		printf("%d ",*(prr+i));
	}
	printf("\n");
}

void rearrangeArray(int *nrr,int len){

	int i,prev,next,temp;

	for(i=0; i<len; ++i){
		if(i == 0){
			prev = *(nrr+i);
			next = *(nrr+i+1);
		} else if(i == len-1){
			next = *(nrr+i);
		} else{
			next = *(nrr+i+1);
		}

		temp = *(nrr+i);
		*(nrr+i) = prev * next;
		prev = temp;
	}
}