#include<stdio.h>
#define MXSZ 100

void CopyString(char*,char*);
void ConcatString(char*,char*);

int main(){

	char str[MXSZ],copy[MXSZ];

	printf("Input a string : ");
	gets(str);

	CopyString(str,copy);

	printf("Original string - %s \n",str);
	printf("Copied string - %s \n",copy);

	printf("Input another string : ");
	gets(copy);

	ConcatString(str,copy);
	printf("String after concatenation - \n%s \n",str);

	return 0;
}

void CopyString(char *src,char *dest){

	while(*src){
		*(dest++) = *(src++); 
	}
}

void ConcatString(char *str1,char *str2){

	while(*str1){
		str1++;
	}
	*(str1++) = ' ';
	
	while(*str2){
		*(str1++) = *(str2++);
	}
}