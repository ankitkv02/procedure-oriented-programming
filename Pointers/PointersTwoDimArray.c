#include<stdio.h>
#define ROWS 3
#define COLS 3

void CreateMatrix(int (*p)[COLS],int,int);
void PrintMatrix(int (*m)[COLS],int,int);

int main(){

	int arr[ROWS][COLS];
	int (*ptr)[COLS] = arr;

	printf("Enter elements into %dx%d matrix - ",ROWS,COLS);
	CreateMatrix(ptr,ROWS,COLS);

	printf("Current matrix looks like - \n");
	PrintMatrix(ptr,ROWS,COLS);

	return 0;
}

void CreateMatrix(int (*pr)[COLS],int r,int c){

	int i,j;

	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			scanf("%d",(*(pr+i)+j));
		}
	}
}

void PrintMatrix(int (*ptr)[COLS],int r,int c){

	int i,j;

	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d ",*(*(ptr+i)+j));
		}
		printf("\n");
	}
}