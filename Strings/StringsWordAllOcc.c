#include<stdio.h>
#define MXSZ 100

void WordAllOcc(char *ctr,char *gtr);

int main(){

	char str[MXSZ],word[MXSZ];

	printf("Input a string : ");
	gets(str);

	printf("Input the word you want to look for : ");
	gets(word);

	printf("Input string - %s \n",str);

	WordAllOcc(str,word);

	return 0;
}

void WordAllOcc(char *ftr,char *jtr){

	int index,i;

	index=0;
	while(*(ftr+index)){
		if(*(ftr+index) == *jtr){
			i = 0;
			while(*(jtr+i)){
				if(*(ftr+index+i) != *(jtr+i)){
					break;
				}
				i++;
			}
			if(*(jtr+i) == '\0'){
				printf("'%s' found at index %d. \n",jtr,index);
			}
		}
		index++;
	}
}