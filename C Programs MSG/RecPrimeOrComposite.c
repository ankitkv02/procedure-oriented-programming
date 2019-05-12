#include<stdio.h>

int isPrime(int,int);

int main(){

	int num;

	printf("Enter any number : ");
	scanf("%d",&num);

	if(isPrime(num,num/2)){
		printf("The entered number is found to be a PRIME number. \n");
	} else{
		printf("The input number is a COMPOSITE number. \n");
	}

	return 0;
}

int isPrime(int x,int y){

	if(y == 1){
		return 1;
	}
								//Solving through recursion.
	if(x%y == 0){
		return 0;
	} else{
		return isPrime(x,y-1);
	}
}