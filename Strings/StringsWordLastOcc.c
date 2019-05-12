#include<stdio.h>
#define MXSZ 100

int WordLastOcc(char *ctr,char *gtr);

int main(){

	char str[MXSZ],word[MXSZ];
	int found;

	printf("Enter a string : ");
	gets(str);

	printf("Input the word you want to look for : ");
	gets(word);

	printf("The input string - %s \n",str);

	found = WordLastOcc(str,word);

	if(found){
		printf("'%s' is found at index %d in the string. \n",word,found);
	} else{
		printf("'%s' not found in the string. \n",word);
	}

	return 0;
}

int WordLastOcc(char *ftr,char *ktr){

	int i,wordStart,foundIndex;

	i=0;
	while(*ftr){
		ftr++;
		i++;
	}

	i--;
	ftr--;
	while(*ftr){
		if(*ftr == ' '){
			foundIndex = i+1;
			if(*(ftr+1) == *(ktr)){
				wordStart = 0;
				while(*(ktr+wordStart)){
					if(*(ftr+wordStart+1) != *(ktr+wordStart)){
						break;
					}
					wordStart++;
				}
				if(*(ktr+wordStart) == '\0' && ((*(ftr+wordStart+1)==' ') || (*(ftr+wordStart+1)=='\t') || (*(ftr+wordStart+1)==',') || (*(ftr+wordStart+1)=='.') || (*(ftr+wordStart+1)=='\0'))){
					return foundIndex;
				}
			}
		}
		i--;
		ftr--;
	}
	return 0;
}