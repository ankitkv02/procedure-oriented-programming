#include<stdio.h>
#define SIZE 1000

void CreateArray(int grr[],int);
void ConcatenateArrays(int drr[],int orr[],int krr[],int,int);
void PrintArray(int hrr[],int);

int main(){

	int arr1[SIZE],arr2[SIZE],bigArr[SIZE],size1,size2;

	printf("Enter the array size of first array : ");
	scanf("%d",&size1);

	CreateArray(arr1,size1);

	printf("Enter the array size of second array : ");
	scanf("%d",&size2);

	CreateArray(arr2,size2);

	printf("First array : ");
	PrintArray(arr1,size1);

	printf("Second array : ");
	PrintArray(arr2,size2);

	ConcatenateArrays(arr1,arr2,bigArr,size1,size2);

	printf("After concatenating both the arrays : ");
	PrintArray(arr1,(size1+size2));

	return 0;

}

void CreateArray(int vrr[],int x){

	int i;

	printf("Enter elements into the array one by one : ");
	for(i=0; i<x; i++)
		scanf("%d",&vrr[i]);
	
}

void ConcatenateArrays(int srr[],int yrr[],int lrr[],int m,int n){

	int i;

	/*for(i=0; i<m; i++){          //Using a third array.
		lrr[i] = srr[i];      
	}*/

	for(i=0; i<n; i++){
		srr[m+i] = yrr[i];		   //Without using third array.		
	}

}

void PrintArray(int xrr[],int q){

	int i;

	for(i=0; i<q; i++){
		printf("%d, ",xrr[i]);
	}
	printf("\n");

}