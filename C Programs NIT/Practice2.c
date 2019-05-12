#include<stdio.h>

void strongRange(int,int);
int isStrong(int);

int main(){

	int lowerLim,upperLim;

	printf("Define lower limit for printing strong numbers : ");
	scanf("%d",&lowerLim);

	printf("Define upper limit for printing strong numbers : ");
	scanf("%d",&upperLim);

	strongRange(lowerLim,upperLim);

	return 0;
}

void strongRange(int l,int u){

	printf("All the strong numbers between %d and %d are - \n",l,u);
	while(l <= u){
		if(isStrong(l)){
			printf("%d, ",l);
		}
		l++;
	}
}

int isStrong(int x){

	int temp,curr,fact,factSum;

	temp = x;
	factSum = 0;
	while(temp > 0){
		curr = temp%10;
		fact = 1;
		while(curr){
			fact *= curr;
			curr--;
		}
		factSum += fact;
		temp /= 10;
	}

	return factSum == x;
}