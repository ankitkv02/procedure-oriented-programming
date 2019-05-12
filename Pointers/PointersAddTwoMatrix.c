#include<stdio.h>
#define ROW 3
#define COL 3

void CreateMatrix(int (*p)[COL]);
void AddMatrix(int (*x)[COL],int (*y)[COL],int (*z)[COL]);
void PrintMAtrix(int (*t)[COL]);

int main(){

	int arr1[ROW][COL],arr2[ROW][COL],sum[ROW][COL];
	/*int (*ptr1)[COL] = arr1;
	int (*ptr2)[COL] = arr2;
	int (*ptr3)[COL] = sum;*/

	printf("Enter elements into the matrix1 one by one - ");
	CreateMatrix(arr1);

	printf("Enter elements into the matrix2 one by one - ");
	CreateMatrix(arr2);

	AddMatrix(arr1,arr2,sum);

	printf("The resultant matrix after addition - \n");
	PrintMAtrix(sum);

	return 0;
}

void CreateMatrix(int (*pr)[COL]){

	int i,j;

	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			scanf("%d",(*(pr+i)+j));
		}
	}
}

void AddMatrix(int (*p1)[COL],int (*p2)[COL],int (*res)[COL]){

	int i,j;

	for(i=0; i<ROW; i++){
		for(j=0; j<=COL; j++){
			*(*(res+i)+j) = *(*(p1+i)+j) + *(*(p2+i)+j);
		}
	}
}

void PrintMAtrix(int (*pr)[COL]){

	int i,j;

	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			printf("%d ",*(*(pr+i)+j));
		}
		printf("\n");
	}
}
