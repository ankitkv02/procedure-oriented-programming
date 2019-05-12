#include<stdio.h>
#include<stdlib.h>
#define MXSZ 100

char* RmvExtraSpaces(char *ctr);

int main(){

	char str[MXSZ];
	char *ns;

	printf("Enter a string : ");
	gets(str);

	printf("Original string - \n'%s; \n",str);

	ns = RmvExtraSpaces(str);

	printf("String after removing all extra spaces - \n'%s' \n",ns);

	return 0;
}

char* RmvExtraSpaces(char *ftr){

	int i,j;
	char *newString;

	newString = (char*)malloc(MXSZ);

	i=0;
	j=0;
	while(*(ftr+i) != '\0'){
		if(*(ftr+i) == ' '){
			*(newString+j) = ' ';
			j++;

			while(*(ftr+i) == ' '){
				i++;
			}
		}
		*(newString+j) = *(ftr+i);
		j++;
		i++;
	}
	*(newString+j) = '\0';

	return newString;
}