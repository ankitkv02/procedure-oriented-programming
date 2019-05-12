#include<stdio.h>
#define SIZE 10

void CopySubarray(int f[],int t[],int);
void CopySubarray2(int f[],int,int t[],int,int);
void PrintArray(int k[]);

int main(){

	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
	int arr2[] = {10,20,30,40,50,60,70,80,90,100};
 		
 	CopySubarray(arr1+2,arr2+4,5);	
//	CopySubarray2(arr1,2,arr2,4,5);

 	PrintArray(arr1);
 	PrintArray(arr2);

	return 0;
}

/*void CopySubarray2(int from[],int m,int to[],int n,int u){

	CopySubarray(from+m,to+n,u);
}*/

void CopySubarray(int n[],int m[],int t){

	int i;

	for(i=0; i<t; i++){
		m[i] = n[i];
	}
}

void PrintArray(int v[]){

	int i=0;

	while(i<SIZE){
		printf("%d ",v[i]);
		i++;
	}
	printf("\n");
}