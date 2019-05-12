#include<stdio.h>
#define MXSZ 100

void CopyString(char *s,char *d);

int main(){

	char src[MXSZ],dest[MXSZ];

	printf("Enter a string : ");
	gets(src);

	CopyString(src,dest);

	printf("Source string - \n'%s' \n",src);
	printf("Copied string - \n'%s' \n",dest);

	return 0;
}

void CopyString(char *a,char *b){

	while(*a){
		*(b++) = *(a++);
	}
}