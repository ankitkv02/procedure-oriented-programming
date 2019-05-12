#include<stdio.h>
#include<stdlib.h>

int main(){

	FILE *fPtr;
	char ch;

	fPtr = fopen("‎⁨file1.txt","r");

	if(fPtr == NULL){
		printf("Sorry! File could not be opened. \n\a");
		exit(EXIT_FAILURE);
	}

	printf("File opened successfully!! Reading contents character by character. \n");
	
	do{
		ch = fgetc(fPtr);
		putchar(ch);
	} while(ch != EOF);

	fclose(fPtr);

	return 0;
}