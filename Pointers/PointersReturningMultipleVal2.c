#include<stdio.h>
#define MXSZ 100

void CreateArray(int*,int);
void PrintArray(int*,int);

typedef struct MinMax{
	int min;
	int max;
}MinMax;

MinMax GetMinMax(int*,int);

int main(){

	int arr[MXSZ];
	int size;
	MinMax arrMinMax;

	printf("Define array-size : ");
	scanf("%d",&size);

	CreateArray(arr,size);

	printf("The input array looks like - \n");
	PrintArray(arr,size);

	arrMinMax = GetMinMax(arr,size);

	printf("Min of the array - %d\nMax of the array - %d\n",arrMinMax.min,arrMinMax.max);

	return 0;
}

void CreateArray(int *ptr,int s){

	int *endArr = ptr+s;

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

MinMax GetMinMax(int *pt,int sz){

	int min,max;
	int *endArr = pt+sz;
	MinMax arrMinMax;

	min = max = *(pt+0);
	while(pt < endArr){
		if(*pt < min){
			min = *pt;
		}

		if(*pt > max){
			max = *pt;
		}
		pt++;
	}

	arrMinMax.min = min;
	arrMinMax.max = max;

	return arrMinMax;
}