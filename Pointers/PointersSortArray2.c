#include<stdio.h>
#define MXSZ 100

void CreateArray(int*,int);
void PrintArray(int*,int);

int Ascending(int*,int*);
int Descending(int*,int*);

void Sort(int*,int,int(*comp)(int*,int*));

int main(){

	int arr[MXSZ];
	int size;

	printf("Define array-size : ");
	scanf("%d",&size);

	CreateArray(arr,size);

	printf("Original array - \n");
	PrintArray(arr,size);

	printf("Array as sorted in ascending order - \n");
	Sort(arr,size,Ascending);
	PrintArray(arr,size);

	printf("Array as sorted in descending order - \n");
	Sort(arr,size,Descending);
	PrintArray(arr,size);

	return 0;
}

void CreateArray(int *p,int sz){

	int *endArr = p+sz;

	printf("Enter elements into the array one by one : ");
	while(p < endArr){
		scanf("%d",p++);
	}
}

void PrintArray(int *ptr,int s){

	int *endArr = ptr+s;

	while(ptr < endArr){
		printf("%d ",*(ptr++));
	}
	printf("\n");
}

int Ascending(int *x,int *y){

	return (*x)-(*y);
}

int Descending(int *a,int *b){

	return (*b)-(*a);
}

void Sort(int *ptr,int sz,int (*comp)(int*,int*)){

	int *endArr = ptr+sz;
	int *next;

	while(ptr < endArr){
		next = ptr+1;
		while(next < endArr){
			if(comp(ptr,next) > 0){
				*ptr ^= *next;
				*next ^= *ptr;
				*ptr ^= *next;
			}
			next++;
		}
		ptr++;
	}
}