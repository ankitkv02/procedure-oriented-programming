#include<stdio.h>

int MaxNum(int);

int main(){

	int n,max;

	printf("Enter the number of values you want to compare : ");
	scanf("%d",&n);

	max = MaxNum(n);

	printf("The max number among %d values is : %d \n",n,max);

	return 0;
}

int MaxNum(int x){

	int num,max;

	if(x==0){
		return -9999999;
	}
	printf("Enter a number : ");
	scanf("%d",&num);
	
	if(x==1){
		return num;
	}

	max = MaxNum(x-1);

	return num>max ? num : max; 
}