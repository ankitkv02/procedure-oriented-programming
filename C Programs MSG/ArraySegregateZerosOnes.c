#include<stdio.h>
#define MX 100

void createArray(int*,int);
void printArray(int*,int);
void segregateZerosOnes(int*,int);

int main(){

	int arr[MX],sz;

	printf("Define array-size : ");
	scanf("%d",&sz);

	createArray(arr,sz);

	printf("Original array - \n");
	printArray(arr,sz);

	segregateZerosOnes(arr,sz);

	printf("Rearranged array - \n");
	printArray(arr,sz);


	return 0;
}

void createArray(int *a,int s){

	int ele,i;

	printf("Enter elements into the array : ");

	i = 0;
	do{
		scanf("%d",&ele);
		if(ele == 1 || ele == 0){
			*(a+i) = ele;			
		} else{
			printf("Invalid input! Please enter '1' or '0' only into the array. \n");
			i--;
		}
		i++;
	}while(i<s);
	
}

void printArray(int *b,int s){

	for(int i=0; i<s; ++i){
		printf("%d ",*(b+i));
	}
	printf("\n");
}

void segregateZerosOnes(int *c,int len){

	for(int i=0; i<len; ++i){
		if(*(c+i) == 1){
			int j = i+1;
			while(j<len){
				if(*(c+j) == 0){
					int swap = *(c+i);
					*(c+i) = *(c+j);
					*(c+j) = swap;
					break;
				}
				j++;
			}
		}
	}
}