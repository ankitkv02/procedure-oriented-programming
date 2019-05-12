#include<stdio.h>

int main(){

	char ch = 'C';
	int i = 1;
	float f = 10.4;
	long long l = 989745783;

	printf("Value of ch - %c\tAddress of ch - %p\n",ch,&ch);
	printf("Value of i - %d\tAddress of i - %p\n",i,&i);
	printf("Value of f - %f\tAddress of f - %p\n",f,&f);
	printf("Value of l - %lld\tAddress of l - %p\n",l,&l);

	return 0;
}