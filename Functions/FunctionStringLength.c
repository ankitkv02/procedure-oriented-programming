#include<stdio.h>
#include<string.h>

int StringLength(char ctr[]);

int main(){
	char str[20];
	int len;

	printf("Enter a string : ");
	gets(str);

	len = StringLength(str); // Using user-defined function insted of strlen(str) of string.h library.

	printf("The length of the string is : %d \n",len);

	return 0;
}

int StringLength(char ftr[]){

	int i=0,length=0;

	while(ftr[i] != '\0'){
		length++;
		i++;
	}
	return length;
}