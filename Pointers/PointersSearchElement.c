#include<stdio.h>
#define MXSZ 100

void CreateArray(int *p,int s);
int SearchElement(int *p,int,int);

int main(){

	int arr[MXSZ];
	int *ptr;
	int size,toSearch,index;

	ptr = arr;

	printf("Define array-size : ");
	scanf("%d",&size);

	printf("Enter elements into the array one by one - ");
	CreateArray(ptr,size);

	printf("Which element do you want to look for? ");
	scanf("%d",&toSearch);

	index = SearchElement(ptr,size,toSearch);

	if(index >= 0){
		printf("%d found at index %d of the array. \n",toSearch,index);
	} else{
		printf("%d does not exist in the array. \n",toSearch);
	}

	return 0;
}

void CreateArray(int *p,int sz){

	int *endArr = p+(sz-1);

	while(p <= endArr){
		scanf("%d",p++);
	}
}

int SearchElement(int *ptr,int sz,int x){

	int i;

	i=0;
	while(i < sz){
		if(*(ptr+(++i)) == x){
			return i;
		}
	}

	return -1;
}