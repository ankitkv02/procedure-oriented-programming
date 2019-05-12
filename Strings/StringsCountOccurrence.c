#include<stdio.h>
#define MXSZ 100

int FindNumOccurrence(char *ctr,char);

int main(){

	char str[MXSZ],ch;
	int numOcc;

	printf("Enter a string : ");
	gets(str);

	printf("Input the character to search : ");
	ch = getchar();

	numOcc = FindNumOccurrence(str,ch);

	if(numOcc > 0){
		printf("%c occurs %d times in the input string.\n",ch,numOcc);
	} else{
		printf("%c not found in the string. \n",ch);
	}

	return 0;
}

int FindNumOccurrence(char *ftr,char x){

	int occ=0;
	int flag = -1;

	while(*ftr){
		if(*ftr == x){
			flag = 1;
			occ++;
		}
		ftr++;
	}

	if(flag == 1){
		flag = occ;
	}

	return flag;
}