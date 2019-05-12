#include<stdio.h>
#include<string.h>
#define MXSZ 100

void RmvWordFirstOcc(char *ctr,char *ktr);

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

void RmvWordFirstOcc(char *ftr,char *jtr){

	int i,index,j,strLen;

	strLen = strlen(ftr); 
	index = 0;
	while(strLen){
		if(*(ftr+index) == *jtr){
			i=0;
			while(*(jtr+i)){
				if(*(ftr+index+i) != *(jtr+i)){
					break;
				}
				i++;
			}
			if(*(jtr+i) == '\0'){
				for(j=index; j<=strLen-i; j++){
					*(ftr+j) = *(ftr+j+i);
				}
				break;
			}
		}
		index++;
	}
}