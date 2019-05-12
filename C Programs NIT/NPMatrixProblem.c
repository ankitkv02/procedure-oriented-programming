#include<stdio.h>
#define SIZE 10

int main(){

	int i,j,m,n,sqSum,rowSum;
	int mat[SIZE][SIZE];

	printf("Enter the number of rows : ");
	scanf("%d",&n);

	printf("Enter the number of columns : ");
	scanf("%d",&m);

	printf("Enter elements into the matrix one by one : ");
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d",&mat[i][j]);
		}
	}

	rowSum = 0;
	sqSum = 0;
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			rowSum += mat[i][j];
		}
		sqSum += rowSum*rowSum;
		rowSum = 0;
	}

	printf("The desired sum is : %d \n",sqSum);

	return 0;
}