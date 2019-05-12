#include<stdio.h>
#include<string.h>
#define MAXSIZE 50

int main(){

	char str[MAXSIZE],ctr[MAXSIZE];
	int i;

	printf("Enter a string : ");
	gets(str);

	for(i=0; str[i] != '\0'; i++){
		ctr[i] = str[i];
	}
	ctr[i] = '\0';

//	printf("%s \n",ctr);
	puts(ctr);

	return 0;
}