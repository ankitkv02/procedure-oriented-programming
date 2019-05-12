#include<stdio.h>
#define MXSZ 100

typedef struct MinMax{
	int min;
	int max;
}MM;

void CreateArray(int*,int);
void PrintArray(int*,int);
MM GetMinMax(int*,int);

int main(){

	int arr[MXSZ];
	int size;
	MM arrMM;

	printf("Define array size : ");
	scanf("%d",&size);

	CreateArray(arr,size);

	printf("The input array - \n");
	PrintArray(arr,size);

	arrMM = GetMinMax(arr,size);
	printf("Min of the array - %d\nMax of the array - %d\n",arrMM.min,arrMM.max);

	return 0;
}

void CreateArray(int *ptr,int sz){

	int *endArr = ptr+(sz-1);

	printf("Enter elements into the array one by one : ");
	while(ptr <= endArr){
		scanf("%d",ptr++);
	}
}

void PrintArray(int *pr,int l){

	int *endArr = pr+(l-1);

	while(pr <= endArr){
		printf("%d ",*(pr++));
	}
	printf("\n");
}

MM GetMinMax(int *p,int s){

	int *endArr = p+(s-1);
	int mn,mx;
	MM res;

	mn = mx = *p;
	while(p <= endArr){
		if(*p < mn){
			mn = *p;
		}

		if(*p > mx){
			mx = *p;
		}

		p++;
	}

	res.min = mn;
	res.max = mx;

	return res;
}