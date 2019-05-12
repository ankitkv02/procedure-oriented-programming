#include<stdio.h>
#define MXSZ 100

void CreateArray(int *p,int);
void PrintArray(int *p,int);
void SortAscending(int *p,int);
void SortDescending(int *p,int);

int main(){

	int arr[MXSZ];
	int size;

	printf("Define array-size : ");
	scanf("%d",&size);

	CreateArray(arr,size);

	printf("Original array - \n");
	PrintArray(arr,size);

	SortAscending(arr,size);
	printf("Array as sorted in ascending order - \n");
	PrintArray(arr,size);

	SortDescending(arr,size);
	printf("Array as sorted in descending order - \n");
	PrintArray(arr,size);

	return 0;
}

void CreateArray(int *ptr,int sz){

	int *endArr = ptr+(sz-1);

	printf("Enter elements into the array one by one : ");
	while(ptr <= endArr){
		scanf("%d",ptr++);
	}
}

void PrintArray(int *pr,int s){

	int *endArr = pr+(s-1);

	while(pr <= endArr){
		printf("%d ",*(pr++));
	}
	printf("\n");
}

void SortAscending(int *pr,int s){

	int *endArr = pr+s;
	int *next;

	while(pr < endArr){
		next = pr+1;
		while(next < endArr){
			if(*next < *pr){
				*next ^= *pr;
				*pr ^= *next;						//Solving though Pointers Arithmetics.
				*next ^= *pr;
			}
			next++;
		}
		pr++;
	}
}

void SortDescending(int *pr,int s){

	int *endArr = pr+s;
	int *next;

	while(pr < endArr){
		next = pr+1;
		while(next < endArr){
			if(*next > *pr){
				*next ^= *pr;
				*pr ^= *next;
				*next ^= *pr;
			}
			next++;
		}
		pr++;
	}
}

/*void SortAscending(int *pr,int s){

	int i,j;

	i=0;
	j=0;
	while(i < s){
		j=i+1;
		while(j < s){
			if(*(pr+j) < *(pr+i)){
				*(pr+j) ^= *(pr+i);
				*(pr+i) ^= *(pr+j);
				*(pr+j) ^= *(pr+i);
			}
			j++;
		}
		i++;
	}

}*/

/*void SortDescending(int *pr,int s){

	int i,j;

	i=0;
	j=0;
	while(i < s){
		j=i+1;
		while(j < s){
			if(*(pr+j) > *(pr+i)){
				*(pr+j) ^= *(pr+i);
				*(pr+i) ^= *(pr+j);
				*(pr+j) ^= *(pr+i);
			}
			j++;
		}
		i++;
	}
	
}*/