#include<stdio.h>
#define MXSZ 100

void CreateArray(int *,int);
void PrintArray(int *,int);
void getMinMax(int *,int,int*,int*);

int main(){

	int arr[MXSZ];
	int size,min,max;

	printf("Define array-size : ");
	scanf("%d",&size);

	CreateArray(arr,size);

	printf("The input array looks like -\n");
	PrintArray(arr,size);

	getMinMax(arr,size,&min,&max);

	printf("Min of array - %d\nMax of array - %d\n",min,max);

	return 0;
}

void CreateArray(int *ptr,int sz){

	int *endArr = ptr+sz;

	while(ptr < endArr){
		scanf("%d",ptr++);
	}
}

void PrintArray(int *pr,int l){

	int *endArr = pr+l;

	while(pr < endArr){
		printf("%d ",*(pr++));
	}
	printf("\n");
}

void getMinMax(int *pt,int s,int *mn,int *mx){

	int *endArr = pt+s;

	*mn = *mx = *(pt+0);
	while(pt < endArr){
		if(*pt < *mn){
			*mn = *pt;
		}

		if(*pt > *mx){
			*mx = *pt;
		}
		pt++;
	}
}