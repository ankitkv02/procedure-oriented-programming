#include<stdio.h>
#define SIZE 10

void createMatrix(int (*m)[SIZE],int);
void printMatrix(int (*n)[SIZE],int);
void matrixMarginals(int (*o)[SIZE],int);

int main(){

	int mat[SIZE][SIZE];
	int size;

	printf("Define the matrix-dimensions : ");
	scanf("%d",&size);

	createMatrix(mat,size);

	printMatrix(mat,size);

	matrixMarginals(mat,size);

	return 0;
}

void createMatrix(int (*b)[SIZE],int sz){

	printf("Enter elements into the matrix of size %dx%d - \n",sz,sz);
	for(int i=0; i<sz; i++){
		for(int j=0; j<sz; j++){
			scanf("%d",(*(b+i)+j));
		}
	}
}

void printMatrix(int (*c)[SIZE],int l){

	printf("The entered matrix looks like - \n");
	for(int i=0; i<l; i++){
		for(int j=0; j<l; j++){
			printf("%d ",*(*(c+i)+j));
		}
		printf("\n");
	}
}

void matrixMarginals(int (*q)[SIZE],int f){

	int rowSum,colSum,j;

	for(int i=0; i<f; i++){
		rowSum = 0;
		colSum = 0;
		for(j=0; j<f; j++){
			rowSum += *(*(q+i)+j);
			colSum += *(*(q+j)+i);
		}
		printf("Sum of row %d - %d \n",i,rowSum);
		printf("Sum of col %d - %d \n",i,colSum);
	}
}