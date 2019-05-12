#include<stdio.h>

int main(){

	int m,n,cur,rowSum,sqSum,colIndex;

	printf("Enter number of rows : ");
	scanf("%d",&n);

	printf("Enter number of columns : ");
	scanf("%d",&m);

	rowSum = 0;
	sqSum = 0;
	while(n){
		colIndex = m;
		while(colIndex){
			printf("Enter element : ");
			scanf("%d",&cur);
			rowSum += cur;
			colIndex--;
		}
		sqSum += rowSum*rowSum;
		rowSum = 0;
		n--;
	}

	printf("The desired sum is : %d \n",sqSum);

	return 0;
}