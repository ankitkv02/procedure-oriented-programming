#include<stdio.h>
#include<stdlib.h>
#define MXSZ 100

void CreateArray(int *p,int s);
void PrintArray(int *p,int s);
void ReverseArray(int *p,int s);

int main(){

	int arr[MXSZ];
	int *ptr;
	int size;

	ptr = arr;

	printf("Define array size : ");
	scanf("%d",&size);

	printf("Enter elements into the array one by one - ");
	CreateArray(ptr,size);

	printf("Array before reversing - \n");
	PrintArray(ptr,size);

	ReverseArray(ptr,size);

	printf("Array after reversing - \n");
	PrintArray(ptr,size);

	return 0;
}

void CreateArray(int *a,int sz){

	int *endArr = a+(sz-1);

	while(a <= endArr){
		scanf("%d",a++);
	}

}

void PrintArray(int *pr,int s){

	int *endArr = pr+(s-1);

	while(pr <= endArr){
		printf("%d, ",*(pr++));
	}
	printf("\n");
}

void ReverseArray(int *pr,int sz){

	int *endArr = pr+(sz-1);

	while(pr < endArr){
		*pr ^= *endArr;
		*endArr ^= *pr;
		*pr ^= *endArr;

		pr++;
		endArr--;
	}
}