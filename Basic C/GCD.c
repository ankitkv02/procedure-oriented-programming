#include<stdio.h>

int main(){

	int a,b,temp;

	printf("Enter two numbers to find their GCD : ");
	scanf("%d%d",&a,&b);

	while(!(b==0)){
		temp = a;
		a = b;
		b = temp%a;
	}

	printf("%d is the GCD! \n",a);

	return 0;
}