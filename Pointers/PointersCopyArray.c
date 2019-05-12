#include<stdio.h>
#define MXSZ 100

void PrintArray(int *p,int s);

int main(){

	int arr1[MXSZ],arr2[MXSZ];
	int *ptr1 = arr1;
	int *ptr2 = arr2;
	int size,i;
	int *end_ptr;

	printf("Define array size : ");
	scanf("%d",&size);

	printf("Enter elements into the array one by one : ");
	for(i=0; i<size; i++){
		scanf("%d",ptr1+i);
	}

	printf("Array1 before copying looks like - \n");
	PrintArray(arr1,size);

	printf("Array2 before copying looks like - \n");
	PrintArray(arr2,size);

	/*for(i=0; i<size; i++){
		*(ptr2+i) = *(ptr1+i);		//Alternate method.
	}*/

	end_ptr = ptr1+(size-1);

	while(ptr1 <= end_ptr){
		*(ptr2++) = *(ptr1++);
	}
	ptr1 = arr1;
	ptr2 = arr2;

	printf("Array1 after copying looks like - \n");
	PrintArray(arr1,size);

	printf("Array2 after copying looks like - \n");
	PrintArray(arr2,size);

	return 0;
}

void PrintArray(int *a,int sz){

	int *endArr = a+sz;

	while(a < endArr){
		printf("%d, ",*(a++));
	}
	printf("\n");
}