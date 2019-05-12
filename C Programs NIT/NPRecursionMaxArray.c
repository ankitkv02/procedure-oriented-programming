#include<stdio.h>
#include<math.h>
#define SIZE 10

int MaxEle(int *arr,int);

int main(){

	int a[] = {11,-2,23,14,-55,6,97,28,49,10};
	int max;

	max = MaxEle(a,SIZE);

	printf("%d \n",max);

	return 0;
}

int MaxEle(int *x,int s){

	int maxVal;

	if(s==0){
		return -9999999;
	}
	if(s==1){
		return *x;
	}

	maxVal = MaxEle(x+1,s-1);

	return *x>maxVal ? *x : maxVal;
}