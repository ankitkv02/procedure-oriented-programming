#include<stdio.h>
#define MX 100

void createArray(int*,int);
void printArray(int*,int);
void oddEveSegregate(int*,int);

int main(){

	int arr[MX],sz;

	printf("Define array size : ");
	scanf("%d",&sz);

	createArray(arr,sz);

	printf("Original Array - \n");
	printArray(arr,sz);

	oddEveSegregate(arr,sz);

	printf("The segregated array looks like - \n");
	printArray(arr,sz);

	return 0;
}

void createArray(int *a,int s){

	printf("Enter elements into the array : ");
	for(int i=0; i<s; ++i){
		scanf("%d",a+i);
	}
}

void printArray(int *b,int s){

	for(int i=0; i<s; ++i){
		printf("%d ",*(b+i));
	}
	printf("\n");
}

void oddEveSegregate(int *c,int len){

	for(int i=0; i<len; ++i){
		if(*(c+i) & 1){
			int j = i+1;
			while(j<len){
				if(*(c+j) % 2 == 0){
					int swap = *(c+i);
					*(c+i) = *(c+j);
					*(c+j) = swap;
					break;
				}
				j++;
			}
		}
	}
}