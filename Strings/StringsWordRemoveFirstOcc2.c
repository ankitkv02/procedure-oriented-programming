#include<stdio.h>
#include<string.h>
#define MXSZ 100

void RmvWordFirstOcc(char *ctr,char *jtr);

int main(){

	char str[MXSZ],word[MXSZ];

	printf("Enter a string : ");
	gets(str);

	printf("Input the word you want to omit : ");
	gets(word);

	printf("Original string - %s \n",str);

	RmvWordFirstOcc(str,word);

	printf("String after removing %s - \n%s \n",word,str);

	return 0;
}

void RmvWordFirstOcc(char *ftr,char *btr){

	int i,j,strLen,wordLen;

	strLen = strlen(ftr);
	wordLen = strlen(btr);

	for(i=0; i<=strLen; i++){
		for(j=0; j<=wordLen; j++){
			if(*(ftr+i+j) != *(btr+j)){
				break;
			}
		}
		if(*(btr+j) == '\0'){
			for(j=i; j<=strLen-wordLen; j++){
				*(ftr+j) = *(ftr+j+wordLen);
			}
			break;
		}
	}
}