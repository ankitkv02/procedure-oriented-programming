#include<stdio.h>
#define MXSZ 100

int WordFirstOcc(char *ctr,char *htr);

int main(){

	char str[MXSZ],word[MXSZ];
	int found;

	printf("Input a string : ");
	gets(str);

	printf("Input the word you want to find : ");
	gets(word);

	printf("The input string - %s \n",str);

	found = WordFirstOcc(str,word);

	if(found){
		printf("'%s' is found at index %d in the string! \n",word,found);
	} else{
		printf("'%s' not found in the string. \n",word);
	}

	return 0;
}

int WordFirstOcc(char *ftr,char *jtr){
	
	int i,index;

	index=0;
	while(*(ftr+index)){
		if(*(ftr+index) == *jtr){
			i=0;
			while(*(jtr+i)){
				if(*(jtr+i) != *(ftr+index+i)){
					break;
				}
				i++;
			}
			if(*(jtr+i) == '\0' && ((*(ftr+i)==' ') || (*(ftr+i)=='\t') || (*(ftr+i)==',') || (*(ftr+i)=='.') || (*(ftr+i)=='\0'))){
				return index;
			}
		}
		index++;
	}

	return 0;
}