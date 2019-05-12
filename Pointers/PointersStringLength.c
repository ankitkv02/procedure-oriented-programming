#include<stdio.h>
#define MXSZ 100

int StringLength(char *ctr);

int main(){

	char str[MXSZ];
	int len;

	printf("Enter a string : ");
	gets(str);

	len = StringLength(str);

	printf("Length of the input string - %d \n",len);

	return 0;
}

int StringLength(char *ftr){

	int i;

	i=0;
	while(*(ftr+(++i))){
		;
	}
	return i;
}