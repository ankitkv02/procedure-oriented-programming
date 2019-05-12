#include<stdio.h>
#include<string.h>
#define MXSZ 100

int FindCharIndexPtr(const char *a,const char);

int main(){

	char str[MXSZ],ch;
	int index;

	printf("Input a string : ");
	gets(str);

	printf("Input the character you want to search for : ");
	ch = getchar();

	index = FindCharIndexPtr(str,ch);

	if(index >=0){
		printf("%c is found at %d index. \n",ch,index);
	} else{
		printf("%c not found. \n",ch);
	}

	return 0;
}

int FindCharIndexPtr(const char *ctr,const char x){

	int index;

	index = 0;
	while(*ctr != '\0'){
		index++;
		ctr++;
	}

	while(*(ctr-1)){
		if(*ctr == x){
			return index;
		}
		index--;
		ctr--;
	}
	return -1;
}