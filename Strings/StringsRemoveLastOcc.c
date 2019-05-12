#include<stdio.h>
#include<string.h>
#define MXSZ 100

void RemoveLastOcc(char *ctr,char);

int main(){

	char str[MXSZ],ch;

	printf("Input a string : ");
	gets(str);

	printf("Input the character to remove : ");
	ch = getchar();

	printf("Original string - %s \n",str);

	RemoveLastOcc(str,ch);

	printf("Modified string - %s \n",str);

	return 0;
}

void RemoveLastOcc(char *ftr,char x){

	int i;

	while(*ftr){
		ftr++;
	}

	ftr--;
	while(*ftr){
		if(*ftr == x){
			i=0;
			while(*(ftr+i)){
				*(ftr+i) = *(ftr+i+1);
				i++;
			}
			break;
		}
		ftr--;
	}

}