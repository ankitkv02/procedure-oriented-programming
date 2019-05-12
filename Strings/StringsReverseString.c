#include<stdio.h>
#define MXSZ 100

int main(){

	char str[MXSZ],rev[MXSZ];
	char *s = str;
	char *r = rev;
	int len = 0;

	printf("Enter a string : ");
	gets(str);

	while(*(s++)) len++;

	s--;
	while(len >= 0){
		*(r++) = *(--s);
		len--;
	}
	*r = '\0';

	printf("Original string - %s \n",str);
	printf("Reversed string - %s \n",rev);

	return 0;
}