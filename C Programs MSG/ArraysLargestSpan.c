/*Write a program in C to return the largest span found in the leftmost
and rightmost appearances of same value(values are inclusive) in
a given array.*/

#include<stdio.h>
#define MX 100

void createArray(int*,int);
void printArray(int*,int);
int largestSpan(int*,int,int*,int*);

int main(){

	int arr[MX],sz,len,ele;

	printf("Define array-size : ");
	scanf("%d",&sz);

	createArray(arr,sz);

	printArray(arr,sz);

	if(largestSpan(arr,sz,&len,&ele)){
		printf("The largest span is %d b/w the same-value pair of element %d. \n",len,ele);
	} else{
		printf("No repeatitive elements found in the array. \n");
	}

	return 0;
}

void createArray(int *a,int s){

	printf("Enter elements into the array : ");
	for(int i=0; i<s; ++i){
		scanf("%d",a+i);
	}
}

void printArray(int *a,int s){

	printf("The input array is - \n");
	for(int i=0; i<s; ++i){
		printf("%d ",*(a+i));
	}
	printf("\n");
}

int largestSpan(int *b,int s,int *l,int *e){

	int i,j,maxLen,len,found;

	maxLen = 0;
	found = 0;
	for(i=0; i<s; ++i){
		j = i+1;
		while(j<s){
			if(*(b+j) == *(b+i)){
				len = j-i+1;
			}
			++j;
		}

		if(len > maxLen){
			found = 1;
			*l = maxLen = len;
			*e = *(b+i);
		}
	}

	if(!found){
		return 0;
	} else{
		return 1;
	}
}