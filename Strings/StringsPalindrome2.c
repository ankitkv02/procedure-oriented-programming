#include<stdio.h>
#define MXSZ 50

int main(){

	char str[MXSZ];
	int len,startIndex,endIndex;

	printf("Enter a string : ");
	gets(str);

	len=0;
	while(str[len] != '\0') len++;

	startIndex = 0;
	endIndex = len-1;

	while(startIndex <= endIndex){
		if(str[startIndex] != str[endIndex]){
			break;
		}
		startIndex++;
		endIndex--;
	}

	if(startIndex >= endIndex){
		printf("Input string is found to be palindrome. \n");
	} else{
		printf("String is not palindrome. \n");
	}

	return 0;
}