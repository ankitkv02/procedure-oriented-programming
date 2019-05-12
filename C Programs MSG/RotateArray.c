#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100

void CreateArray(int trr[],int);
void RotateArray(int urr[],int,char str[],int);
void PrintArray(int frr[],int);

int main()
{
	int arr[SIZE],size,times;
	char dir[10];

	printf("Define array size : ");
	scanf("%d", &size);

	CreateArray(arr,size);

	printf("Original Array - \n");
	PrintArray(arr,size);

	getchar();			//Dummy getchar() to eliminate extra ENTER character
	
	printf("Which direction do you want to rotate the array in? (Left or Right) : ");
	gets(dir);

	printf("How many times.? ");
	scanf("%d",&times);

	RotateArray(arr,size,dir,times);

	return 0;
}

void CreateArray(int yrr[],int x)
{
	int i;

	printf("Enter elements into the array one by one : ");
	for(i=0; i<x; i++){
		scanf("%d",&(*(yrr+i)));
	}
}

void PrintArray(int hrr[],int g)
{
	int i;

	for(i=0; i<g; i++){
		printf("%d ",hrr[i]);
	}
	printf("\n");
}

void RotateArray(int prr[],int q,char ctr[],int t)
{
	int swap,i;

	if(strcmp(ctr,"left") == 0 || strcmp(ctr,"Left") == 0)
	{	
		while(t){
			swap = prr[0];	
			for(i=0; i<q; i++){
				prr[i] = prr[i+1];
			}
			prr[q-1] = swap;
			t--;
		}		
		printf("Modified Array - \n");
		PrintArray(prr,q);
	}

	else if(strcmp(ctr,"right") == 0 || strcmp(ctr,"Right") == 0)
	{	
		while(t){
			swap = prr[q-1];
			for(i=q-1; i>=0; i--){
				prr[i] = prr[i-1];
			}
			prr[0] = swap;
			t--;
		}	
		printf("Modified Array - \n");
		PrintArray(prr,q);
	}

	else
		printf("Invalid direction! \n");

}