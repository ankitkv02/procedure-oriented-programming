#include<stdio.h>
#include<stdlib.h>

int main(){

	char str[20];
	float num;

	printf("Enter a number : ");
	gets(str);

//	num = (float) 7/5; 
	num = atof(str);

	printf("The entered number(numeric) is - %f \nThe entered number(string) is - %s \n",num,str);

	return 0;
}