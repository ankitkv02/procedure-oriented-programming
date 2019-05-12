#include<stdio.h>
#define MXSZ 100

int FindCharIndex(char a[],char);
int FindCharIndexPtr(const char *a,const char);

int main(){

	char str[MXSZ],ch;
	int index;

	printf("Enter a string : ");
	gets(str);

	printf("Input the character you want to search : ");
	ch = getchar();

	index = FindCharIndexPtr(str,ch);

	if(index >= 0){
		printf("The character %c is found at %d index. \n",ch,index);
	} else{
		printf("%c not found. \n",ch);
	}

	return 0;
}

int FindCharIndexPtr(const char *ctr,const char x){

	int i;

	i=0;
	while(*ctr){
		if(*ctr == x){
			return i;				//Pointer Method.
		}
		i++;
		ctr++;
	}
	return -1;
}

/*int FindCharIndex(char ctr[],char x){

	int i;

	i = 0;
	while(ctr[i] != '\0'){
		if(ctr[i] == x){			//Non-pointer Method.
			return i;
		}
		i++;
	}
	return -1;
}*/