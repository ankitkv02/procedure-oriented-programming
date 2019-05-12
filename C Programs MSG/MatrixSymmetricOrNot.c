#include<stdio.h>
#define SIZE 10

void CreateMatrix(int (*m)[SIZE],int);
void PrintMatrix(int (*a)[SIZE],int);
int isSymmetric(int (*n)[SIZE],int);

int main(){

	int mat[SIZE][SIZE];
	int size;

	printf("Enter the size of the matrix : ");
	scanf("%d",&size);

	CreateMatrix(mat,size);

	PrintMatrix(mat,size);

	if(isSymmetric(mat,size)){
		printf("The matrix is found to be symmetric. \n");
	} else{
		printf("The matrix is not symmetric. \n");
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

int isSymmetric(int (*b)[SIZE],int l){

	for(int i=0; i<l; i++){
		for(int j=0; j<l; j++){
			if(*(*(b+i)+j) != *(*(b+j)+i)){	 //Transpose-comparision method. 
				return 0;
			}
		}
	}

	return 1;
}

void PrintMatrix(int (*y)[SIZE],int d){

	printf("The matrix looks like - \n");
	for(int i=0; i<d; i++){
		for(int j=0; j<d; j++){
			printf("%d ",*(*(y+i)+j));
		}
		printf("\n");
	}
}