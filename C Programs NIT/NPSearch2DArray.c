#include<stdio.h>
#define colNum 5

int SearchRow(int (*a)[colNum],int,int,int*,int*);
int SearchCol(int*,int);

int main(){

	int mat[][colNum] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
	int r,c;

	if(SearchRow(mat,4,9,&r,&c)){
		printf("Key found at %d row and %d column! \n",r,c);
	} else{
		printf("Key not found. \n");
	}

	return 0;
}

int SearchRow(int (*m)[colNum],int rowNum,int key,int *rowIndex,int *colIndex){

	int i=0;
	int found=0;

	*rowIndex=-1;
	*colIndex=-1;
	while(i<rowNum && !found){
		*colIndex = SearchCol(*(m+i),key);
		if(*colIndex >= 0){
			*rowIndex = i;
			found = 1;
		}
		i++;	
	}
	/*if(!found){
		*colIndex = -1;
	}*/
	return found;
}

int SearchCol(int *c,int key){

	int i=0;
	int ci=-1;

	while(i<colNum){
		if(*(c+i) == key){
			ci = i;
			break;
		}
		i++;
	}
	return ci;
}