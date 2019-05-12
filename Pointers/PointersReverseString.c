#include<stdio.h>
#define MXSZ 100

void ReverseString(char *p);

int main(){

	char str[MXSZ];

	printf("Input a string : ");
	gets(str);

	printf("Original string - \n'%s' \n",str);

	ReverseString(str);

	printf("String after reversing characters - \n'%s' \n",str);

	return 0;
}

void ReverseString(char *ptr){

	int sz;
	char *endStr;

	sz = 0;
	while(*(ptr+sz)){
		sz++;
	}

	endStr = ptr+(sz-1);

	while(ptr < endStr){
		*ptr ^= *endStr;
		*endStr ^= *ptr;
		*ptr ^= *endStr;

		ptr++;
		endStr--;
	}
}