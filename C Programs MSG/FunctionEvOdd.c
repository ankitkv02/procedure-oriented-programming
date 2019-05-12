#include<stdio.h>

int isOdd(int);

int main(){

	int num;

	printf("Enter a number to find out if it is an odd number : ");
	scanf("%d",&num);

	if(isOdd(num)){
		printf("%d is found to be an odd number. \n",num);
	} else{
		printf("%d is an even number. \n",num);
	}

	return 0;
}

int isOdd(int x){

	return x & 1;
}