#include<stdio.h>
#include<string.h>
#define MXSZ 100

void RmvWordAllOcc(char *ctr,char *jtr);

int main(){

	char str[MXSZ],word[MXSZ];

	printf("Enter a string : ");
	gets(str);

	printf("Input the word you want to omit : ");
	gets(word);

	printf("Original string - %s \n",str);

	RmvWordAllOcc(str,word);

	printf("String after removing %s - \n%s \n",word,str);

	return 0;
}

void RmvWordAllOcc(char *ftr,char *ktr){

	int i,j,strLen,wordLen,found;

	strLen = strlen(ftr);
	wordLen = strlen(ktr);

	for(i=0; i<=strLen; i++){
		found = 1;
		for(j=0; j<=wordLen; j++){
			if(*(ftr+i+j) != *(ktr+j)){
				found = 0;
				break;
			}
		}

		//if it is not a word.
		if(ftr[i + j] != ' ' && ftr[i + j] != '\t' && ftr[i + j] != '\n' && ftr[i + j] != '\0'){
            found = 0;
        }

		if(*(ktr+j) == '\0' && found){
			for(j=i; j<=strLen-wordLen; j++){
				*(ftr+j) = *(ftr+j+wordLen);
			}
			strLen -= wordLen;
			i--;
		}
	}

}