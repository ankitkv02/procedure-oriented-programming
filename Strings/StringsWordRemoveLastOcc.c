#include<stdio.h>
#include<string.h>
#define MXSZ 100

void RmvWordLastOcc(char *ctr,char *jtr);

int main(){

	char str[MXSZ],word[MXSZ];

	printf("Enter a string : ");
	gets(str);

	printf("Input the word you want to remove : ");
	gets(word);

	printf("Original string - %s \n",str);

	RmvWordLastOcc(str,word);

	return 0;
}

void RmvWordLastOcc(char *ftr,char *mtr){

	int i,j,strLen,wordLen,index;

	strLen = strlen(ftr);
	wordLen = strlen(mtr);

	index = -1;
	for(i=0; i<=strLen; i++){
		for(j=0; j<=wordLen; j++){
			if(ftr[i+j] != mtr[j]){
				break;
			}
		}
		if(mtr[j] == '\0'){
			index = i;
		}
	}

	if(index == -1){
		printf("%s not found in the string. \n",mtr);
	} else{
		for(j=index; j<=strLen-wordLen; j++){
			ftr[j] = ftr[j+wordLen];
		}
		printf("String after removing %s - \n%s \n",mtr,ftr);
	}

}