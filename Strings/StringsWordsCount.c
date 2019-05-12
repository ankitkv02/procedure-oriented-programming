#include<stdio.h>
#define MXSZ 50

int main(){

	char str[MXSZ];
	char prevChar;
	int i,wordCount;

	printf("Enter a string : ");
	gets(str);

	i = wordCount = 0;
	prevChar = '\0';
	
	while(str[i] != '\0'){
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\0'){
			if(prevChar != ' ' || prevChar != '\n' || prevChar != '\t' || prevChar != '\0'){
				wordCount++;
			}
		}

		prevChar = str[i];
		if(str[i] == '\0'){
			break;
		} else{
			i++;
		}
	}

	printf("There are %d words in the input string. \n",wordCount);

	return 0;
}