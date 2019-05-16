/*Write a program in C to rearrange an array in such an order that– smallest, largest, 
2nd smallest, 2nd largest and on.*/

#include<stdio.h>
#define MAX 100

void CreateArray(int*,int);
void PrintArray(int*,int);
void Rearrange(int*,int);

int main(){

	int arr[MAX],size;

	printf("Define array-size : ");
	scanf("%d",&size);

	CreateArray(arr,size);

	PrintArray(arr,size);

	Rearrange(arr,size);

	PrintArray(arr,size);

	return 0;
}

void CreateArray(int *a,int s){

	printf("Enter elements into the array one by one : ");
	for(int i=0; i<s; ++i){
		scanf("%d",&(*(a+i)));
	}
}

void PrintArray(int *b,int sz){

	printf("The current array looks like - \n");
	for(int i=0; i<sz; ++i){
		printf("%d ",*(b+i));
	}
	printf("\n");
}

void Rearrange(int *c,int len){

	int i,j,currMin,currMax,index;

	for(i=0; i<len; ++i){
		currMin = currMax = *(c+i);
		if(i & 1){
			for(j=i; j<len; ++j){
				if(*(c+j) > currMax){
					currMax = *(c+j);
					index = j;
				}
			}
			*(c+index) = *(c+i);
			*(c+i) = currMax;
			
		} else{
			for(j=i; j<len; ++j){
				if(*(c+j) < currMin){
					currMin = *(c+j);
					index = j;
				}
			}
			*(c+index) = *(c+i);
			*(c+i) = currMin;
		}
	}
}