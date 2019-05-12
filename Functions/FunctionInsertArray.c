#include<stdio.h>
#define SIZE 1000

void CreateArray(int yrr[],int);
void InsertArray(int urr[],int orr[],int,int,int);
void PrintArray(int crr[],int);

int main(){

	int arr[SIZE],insert[SIZE],size1,size2,loc;

	printf("Enter array size : ");
	scanf("%d",&size1);

	CreateArray(arr,size1);

	printf("Enter the size of the array to be inserted : ");
	scanf("%d",&size2);

	CreateArray(insert,size2);

	printf("Which location do you want to insert the array into ? : ");
	scanf("%d",&loc);

	InsertArray(arr,insert,size1,size2,loc);

	printf("Array after insertion : ");
	PrintArray(arr,(size1+size2));

	return 0;
}

void CreateArray(int prr[],int a){

	int i;

	printf("Enter elements into the array one by one : ");
	for(i=0; i<a; i++)
		scanf("%d",&prr[i]);
}

void InsertArray(int vrr[],int hrr[],int x,int y,int z){

	int i,j;

	for(i=0; i<y; i++){
		for(j=x+y; j>z; j--){
			vrr[j] = vrr[j-1];
		}
		vrr[z+i] = hrr[i];
	}

}

void PrintArray(int brr[],int a){

	int i;

	for(i=0; i<a; i++){
		printf("%d ",brr[i]);
	}
	printf("\n");
}