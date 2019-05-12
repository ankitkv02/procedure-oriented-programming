#include<stdio.h>

int GCD(int,int);

int main(){

	int a,b,gcd;

	printf("Enter two numbers to find their gcd : ");
	scanf("%d%d",&a,&b);

	gcd = GCD(a,b);

	printf("The gcd of %d and %d is : %d \n",a,b,gcd);

	return 0;
}

int GCD(int x,int y){

	if(y==0){
		return x;
	}

	return GCD(y,x%y);
}