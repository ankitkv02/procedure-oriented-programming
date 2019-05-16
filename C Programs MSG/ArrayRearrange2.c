#include<stdio.h>
#define MXSZ 100

void createArray(int*,int);
void arrayRearrange(int*,int);
void printArray(int*,int);

int main(){

	int arr[MXSZ],size;

	printf("Define array size : ");
	scanf("%d",&size);

	createArray(arr,size);

	printf("Original array - \n");
	printArray(arr,size);

	arrayRearrange(arr,size);

	printf("Array after the reshuffle - \n");
	printArray(arr,size);

	return 0;
}

void createArray(int *a,int s){

	printf("Enter each individual element into the array onr by one : \n");
	for(int i=0; i<s; ++i){
		scanf("%d",a+i);
	}
}

void printArray(int *b,int sz){

	for(int i=0; i<sz; ++i){
		printf("%d ",*(b+i));
	}
	printf("\n");
}

void arrayRearrange(int *brr,int len){

	int i,j,swap;

	for(i=0; i<len-1; ++i){
		j = i+1;
		if(i & 1){
			if(*(brr+i) < *(brr+j)){
				while(j<len){
					if(*(brr+j) > *(brr+i)){
						break;
					}
					j++;
				}
				swap = *(brr+i);
				*(brr+i) = *(brr+j);
				*(brr+j) = swap;
			}
		} else{
			if(*(brr+i) > *(brr+j)){
				while(j<len){
					if(*(brr+j) < *(brr+i)){
						break;
					}
					j++;
				}
				swap = *(brr+i);
				*(brr+i) = *(brr+j);
				*(brr+j) = swap;
			}
		} 
	}
}
