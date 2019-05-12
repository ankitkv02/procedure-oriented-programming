#include<stdio.h>
#define MXSZ 100

void ReplaceAllOcc(char *ctr,char,char);

int main(){

	char str[MXSZ],ch1,ch2;

	printf("Input a string : ");
	gets(str);

	printf("Replaced Character : ");
	ch1 = getchar();

	getchar();         //Dummy getchar() to eliminate extra ENTER character

	printf("Replacing Character : ");
	ch2 = getchar();

	printf("Original string - %s \n",str);

	ReplaceAllOcc(str,ch1,ch2);

	printf("Modified string - %s \n",str);

	return 0;
}

void ReplaceAllOcc(char *ftr,char x,char y){

	while(*ftr){
		if(*ftr == x){
			*ftr = y;
		}
		ftr++;
	}
}