#include<stdio.h>
#define MXSZ 100

int main(){

	char str[MXSZ],rev[MXSZ];
	int len,index,i,wordStart,wordEnd;

	printf("Enter a string : ");
	gets(str);

	len = 0;
	while(str[len] != '\0') len++;

	index = 0;
	wordStart = len - 1;
	wordEnd = len - 1;

	while(wordStart > 0){
		if(str[wordStart] == ' '){
			i = wordStart + 1;
			while(i <= wordEnd){
				rev[index] = str[i];
				i++;
				index++;
			}
			rev[index++] = ' ';
			wordEnd = wordStart - 1;
		}
		wordStart--;
	}

	for(i=0; i<=wordEnd; i++){
		rev[index] = str[i];
		index++;
	}
	rev[index] = '\0';

	printf("Original string - %s \n",str);
	printf("Reverse ordered words - %s \n",rev);

	return 0;
}