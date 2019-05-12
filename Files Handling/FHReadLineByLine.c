#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 1000

int main(){

	FILE *fp;
	char str[SIZE];
	int strLen;

	fp = fopen("file1.txt","r");

	if(fp == NULL){
		printf("Sorry! File could not be opened. \n\a");
		exit(EXIT_FAILURE);
	}

	while((fgets(str,SIZE,fp)) != NULL){
		strLen = strlen(str);
		str[strLen-1] = str[strLen-1] == '\n' ? '\0' : str[strLen-1];
		puts(str);
	}

	fclose(fp);

	return 0;
}