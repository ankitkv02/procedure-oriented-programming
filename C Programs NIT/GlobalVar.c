#include<stdio.h>

void check();

int a = 10;

int main(){

	printf("%d \n",a);
	a = 60;
	printf("%d \n",a);
	check();

	return 0;
}

void check(){
	printf("%d \n",a);
}
