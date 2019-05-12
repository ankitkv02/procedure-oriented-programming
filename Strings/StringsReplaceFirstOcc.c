#include<stdio.h>
#define MXSZ 100

void ReplaceFirstOcc(char *ctr,char,char);

int main(){

	char str[MXSZ],ch1,ch2;

	printf("Input a string : ");
	gets(str);

	printf("Replaced character? : ");
	ch1 = getchar();

	getchar();

	printf("Replacing character? : ");
	ch2 = getchar();

	printf("Original string - %s \n",str);

	ReplaceFirstOcc(str,ch1,ch2);

	printf("Modified string - %s \n",str);

	return 0;
}

void ReplaceFirstOcc(char *ftr,char x,char y){

	while(*ftr){
		if(*ftr == x){
			*ftr = y;
			break;
		}
		ftr++;
	}
}