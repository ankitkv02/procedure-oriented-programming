#include<stdio.h>
#define MXSZ 100

int main(){

	int arr[MXSZ];
	int i,size;
	int *ptr = arr;

	printf("Define array size : ");
	scanf("%d",&size);

	printf("Enter elements into the array one by one : ");
	for(i=0; i<size; i++){
		scanf("%d",ptr+i);
	}

	printf("Array looks like - \n");
	for(i=0; i<size; i++){
		printf("%d, ",*(ptr+i));
	}
	printf("\n");

	return 0;
}