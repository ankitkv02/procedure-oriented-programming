#include<stdio.h>
#include<stdlib.h>
#define MXSZ 100

int StrLen(char*);
char* CopyString(char*);

int main(){

	char str[MXSZ];
	int len;
	char *newString;

	printf("Enter a string : ");
	gets(str);

	len = StrLen(str);
	printf("Length of the input string is - %d \n",len);

	newString = CopyString(str);
	printf("Copied string - %s \n",newString);

	return 0;
}

int StrLen(char *ptr){

	int i;

	i=0;
	while(*(ptr+i)){
		i++;
	}

	return i;
}

char* CopyString(char *pr){

 	char *ns;
 	int i;

 	ns = (char*)malloc(MXSZ);

 	i=0;
 	while(*(pr+i)){
 		*(ns+i) = *(pr+i);
 		i++;
 	}

 	return ns;
 }