#include<stdio.h>
#define MXSZ 100

void CreateArray(int*,int);
void PrintfArray(int*,int);
int Ascending(int*,int*);
int Descending(int*,int*);
void Sort(int*,int,int(*funPtr)(int*,int*));

int main(){

	int arr[MXSZ];
	int size;

	printf("Define array size : ");
	scanf("%d",&size);

	CreateArray(arr,size);

	printf("Original array - \n");
	PrintfArray(arr,size);

	Sort(arr,size,Ascending);
	printf("Array as sorted in the ascending order - \n");
	PrintfArray(arr,size);

	Sort(arr,size,Descending);
	printf("Array as sorted in the descending order - \n");
	PrintfArray(arr,size);

	return 0;
}

void CreateArray(int *ptr,int sz){

	int *endArr = ptr+(sz-1);

	printf("Enter elements into the array one by one : ");
	while(ptr <= endArr){
		scanf("%d",ptr++);
	}
}

void PrintfArray(int *pr,int l){

	int *endArr = pr+(l-1);

	while(pr <= endArr){
		printf("%d ",*(pr++));
	}
	printf("\n");
}

int Ascending(int *a,int *b){

	return (*a) - (*b);
}

int Descending(int *x,int *y){

	return (*y) - (*x);
}

void Sort(int *p,int s,int(*comp)(int*,int*)){

	int *endArr = p+(s-1);
	int *next;

	while(p <= endArr){
		next = p+1;
		while(next <= endArr){
			if(comp(p,next) > 0){
				*next ^= *p;
				*p ^= *next;
				*next ^= *p;
			}
			next++;
		}
		p++;
	}
}