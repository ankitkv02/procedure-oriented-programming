#include<stdio.h>
#define MXSZ 100

void CreateArray(int *p,int s);
void PrintArray(int *f,int l);
void SwapArrayEle(int *a,int *b,int m);

int main(){

	int arr1[MXSZ],arr2[MXSZ];
	int *ptr1,*ptr2;
	int size,i;

	ptr1 = arr1;
	ptr2 = arr2;

	printf("Define array size : ");
	scanf("%d",&size);

	printf("Enter elements into the first array : ");
	CreateArray(ptr1,size);

	printf("Enter elements into the second array : ");
	CreateArray(ptr2,size);

	printf("Array1 before swapping - \n");
	PrintArray(ptr1,size);

	printf("Array2 before swapping - \n");
	PrintArray(ptr2,size);

	SwapArrayEle(ptr1,ptr2,size);

	printf("Array1 after swapping - \n");
	PrintArray(ptr1,size);

	printf("Array2 after swapping - \n");
	PrintArray(ptr2,size);

	return 0;
}

void CreateArray(int *p,int sz){

	int *arrEnd = p+(sz-1);

	while(p <= arrEnd){
		scanf("%d",p++);
	}
}

void PrintArray(int *d,int l){

	int *arrEnd = d+(l-1);

	while(d <= arrEnd){
		printf("%d, ",*(d++));
	}
	printf("\n");
	
}

void SwapArrayEle(int *x,int *y,int z){

	int *a = x+(z-1);

	while(x <= a){
		*x ^= *y;
		*y ^= *x;
		*x ^= *y;

		x++;
		y++;
	}
}