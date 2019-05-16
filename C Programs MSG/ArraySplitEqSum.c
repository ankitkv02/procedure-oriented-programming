/*Write a program in C to return true if an array can be splitted in such 
a position that, the sum of left side of the splitting is equal to the
sum of the right side.*/

#include<stdio.h>
#define MX 100

void createArray(int*,int);
void printArray(int*,int);
int arraySplit(int*,int,int*);
int rightSum(int*,int,int);

int main(){

	int arr[MX],sz,pos;

	printf("Define array-size : ");
	scanf("%d",&sz);

	createArray(arr,sz);

	printArray(arr,sz);

	if(arraySplit(arr,sz,&pos)){
		printf("The array can be splitted at index %d so that left-side sub-array sum equals the right-side one. \n",pos);
	} else{
		printf("The array can not be splitted into two equi-sum halves. \n");
	}

	return 0;
}

void createArray(int *a,int s){

	printf("Enter elements into the array one by one : ");
	for(int i=0; i<s; ++i){
		scanf("%d",a+i);
	}
}

void printArray(int *b,int l){

	printf("The input array is- \n");
	for(int i=0; i<l; ++i){
		printf("%d ",*(b+i));
	}
	printf("\n");
}

int arraySplit(int *c,int len, int *ind){

	int leftSum;

	leftSum = 0;
	for(int i=0; i<len; ++i){
		leftSum += *(c+i);
		if(leftSum == rightSum(c,i+1,len)){
			*ind = i;
			return 1;
		}
	}

	return 0 ;
}

int rightSum(int *d,int start,int end){

	int eleSum;

	eleSum = 0;
	for(int i=start; i<end; ++i){
		eleSum += *(d+i);
	}

	return eleSum;
}