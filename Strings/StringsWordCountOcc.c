#include<stdio.h>
#define MXSZ 100

int WordCount(char *ctr,char *ltr);

int main(){

	char str[MXSZ],word[MXSZ];
	int occNum;

	printf("Enter a string : ");
	gets(str);

	printf("Input the word you want to search : ");
	gets(word);

	occNum = WordCount(str,word);

	printf("'%s' occurs in the given string for %d times. \n",word,occNum);

	return 0;
}

int WordCount(char *ftr,char *jtr){

	int i,count;

	while(*ftr){
		if(*ftr == *jtr){
			i=0;
			while(*(jtr+i)){
				if(*(jtr+i) != *(ftr+i)){
					break;
				}
				i++;
			}
			if(*(jtr+i) == '\0'){
				count++;
			}
		}
		ftr++;
	}

	return count;
}