#include<stdio.h>
#define SIZE 20

int main(){

	char str[SIZE];
	int length;

	printf("Enter a string : ");
	gets(str);

	length = 0;
	while(str[length] != '\0'){
		length++;
	}

	printf("String length is : %d \n",length);
	
	return 0;
}