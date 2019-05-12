#include<stdio.h>
#include<stdlib.h>
#define MXSZ 100

char* CopyString(char *ctr);

int main(){

	char src[MXSZ];
	char *dest;

	printf("Input a string : ");
	gets(src);

	dest = CopyString(src);

	printf("Original string - \n'%s' \n",src);
	printf("Copied string - \n'%s' \n",dest);

	return 0;
}

char* CopyString(char *ftr){

	int i;
	char *newString;

	newString = (char*)malloc(MXSZ);

	i=0;
	while(*(ftr+i)){
		*(newString+i) = *(ftr+i);
		i++;
	}
	*(newString+i) = '\0';

	return newString;
}