#include<stdio.h>
#define ROW 3
#define COL 3

void CreateMatrix(int (*p)[COL]);
void MultiplyMatrix(int (*p1)[COL],int (*p2)[COL],int (*s)[COL]);
void PrintMatrix(int (*a)[COL]);

int main(){

	int mat1[ROW][COL],mat2[ROW][COL],sum[ROW][COL];

	printf("Enter elements into the matrix1 one by one - ");
	CreateMatrix(mat1);

	printf("Enter elements into the matrix2 one by one - ");
	CreateMatrix(mat2);

	MultiplyMatrix(mat1,mat2,sum);

	printf("Resultant matrix after multiplying the elements - \n");
	PrintMatrix(sum);

	return 0;
}

void CreateMatrix(int (*p)[COL]){

	int i,j;

	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			scanf("%d",(*(p+i)+j));
		}
	}
}

void MultiplyMatrix(int (*pr1)[COL],int (*pr2)[COL],int (*res)[COL]){

	int i,j,ele,sum;


	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			sum = 0;
			for(ele=0; ele<COL; ele++){
				sum += (*(*(pr1+i)+ele))*(*(*(pr2+ele)+j));
			}
			*(*(res+i)+j) = sum;
		}
	}
}

void PrintMatrix(int (*p)[COL]){

	int i,j;

	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			printf("%d ",*(*(p+i)+j));
		}
		printf("\n");
	}
}