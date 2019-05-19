#include<stdio.h>
#define MX 100

void createArray(int*,int);
void printArray(int*,int);
int peakElement(int*,int,int*);

int main(){

	int arr[MX],sz,pos;

	printf("Define array-size : ");
	scanf("%d",&sz);

	createArray(arr,sz);

	if(peakElement(arr,sz,&pos)){
		printf("The very first peak element in the array occurs at index %d. \n",pos);
	} else{
		printf("There are no peak elements in the array. \n");
	}

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

int peakElement(int *c,int len,int *ind){

	int i;

	i = 0;
	while(i<len && *(c+i) < *(c+i+1)){
		++i;
	}

	if(i == len-1){
		return 0;
	} else{
		*ind = i;
		return i;
	}
}