#include<stdio.h>
#define MXSZ 100

void ReplaceLastOcc(char *ctr,char,char);

int main(){

	char str[MXSZ],ch1,ch2;

	printf("Input a string : ");
	gets(str);

	printf("Replaced character? : ");
	ch1 = getchar();

	getchar();

	printf("Replacing character? : ");
	ch2 = getchar();

	printf("Original string - %s \n",str);

	ReplaceLastOcc(str,ch1,ch2);
	
	printf("Modified string - %s \n",str);	

	return 0;
}

void ReplaceLastOcc(char *ftr,char x,char y){

	while(*ftr){
		ftr++;   //Note that the pointer has moved to the null-char ('\0') in the string.
	}

	ftr--;       //To move the pointer from '\0' onto the last character of string.
	while(*ftr){
		if(*ftr == x){
			*ftr = y;
			break;
		}
		ftr--;
	}
}