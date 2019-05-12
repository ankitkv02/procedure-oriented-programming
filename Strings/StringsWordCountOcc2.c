#include<stdio.h>
#include<string.h>
#define MXSZ 100

int WordCount(char *ctr,char *mtr);

int main(){

	char str[MXSZ],word[MXSZ];
	int occNum;

	printf("Enter a string : ");
	gets(str);

	printf("Input the word you're looking for : ");
	gets(word);

	occNum = WordCount(str,word);

	printf("'%s' occurs %d times in the string. \n",word,occNum);

	return 0;
}

int WordCount(char *ftr,char *htr){

	int i,j,count,strLen,wordLen;

	strLen = strlen(ftr);
	wordLen = strlen(htr);

	count=0;
	for(i=0; i<=strLen-wordLen; i++){
		for(j=0; j<=wordLen; j++){
			if(*(ftr+i+j) != *(htr+j)){
				break;
			}
		}
		if(*(htr+j) == '\0'){
			count++;
		}
	}

	return count;
}