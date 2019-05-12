#include<stdio.h>
#define SIZE 10

void CreateMatrix(int (*m)[SIZE],int);
void PrintMatrix(int (*n)[SIZE],int);
int isSparseMatrix(int (*o)[SIZE],int);

int main(){

	int mat[SIZE][SIZE];
	int size;

	printf("Define the dimension of the matrix : ");
	scanf("%d",&size);

	CreateMatrix(mat,size);

	PrintMatrix(mat,size);

	if(isSparseMatrix(mat,size)){
		printf("The entered matrix is found to be a sparse matrix! \n");
	} else{
		printf("The entered matrix is not sparse. \n");
	}

	return 0;
}

void CreateMatrix(int (*a)[SIZE],int sz){

	printf("Enter elements into the matrix of size %dx%d - \n",sz,sz);
	for(int i=0; i<sz; i++){
		for(int j=0; j<sz; j++){
			scanf("%d",(*(a+i)+j));
		}
	}
}

void PrintMatrix(int (*b)[SIZE],int d){

	printf("The matrix looks like - \n");
	for(int i=0; i<d; i++){
		for(int j=0; j<d; j++){
			printf("%d ",*(*(b+i)+j));
		}
		printf("\n");
	}
}

int isSparseMatrix(int (*h)[SIZE],int p){

	int zeros;

	zeros = 0;
	for(int i=0; i<p; i++){
		for(int j=0; j<p; j++){
			if(*(*(h+i)+j) == 0){
				zeros++;
			}

			if(zeros > p*p/2){
				return 1;
			}
		}
	}

	return 0;
}