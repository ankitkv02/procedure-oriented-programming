#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int MaxArray(int *arr,int);

int main(){

	int x[] = {1,2,3,4,15,6,7,8,9,10};
	int max;

	max = MaxArray(x,SIZE);
	printf("The max element in the array is : %d \n",max);

	return 0;
}

int MaxArray(int *a,int s){

	int max1,max2;

	if(s==0){
		return -9999999;
	}
	if(s==1){
		return *a;
	}

	max1 = MaxArray(a,s/2);
	max2 = MaxArray(a+s/2,s-s/2);

	return max1<max2 ? max2 : max1;
}