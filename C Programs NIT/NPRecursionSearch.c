#include<stdio.h>
#define SIZE 10

int Search(int*,int,int);

int main(){

	int a[] = {1,2,3,4,5,6,7,8,9,10};


	if(Search(a,SIZE,11)){
		printf("Found! \n");
	} else{
		printf("Not found. \n");
	}

	return 0;
}

int Search(int *x,int s,int key){

	return s==0 ? 0 : *x==key ? 1 : Search(x+1,s-1,key);
}