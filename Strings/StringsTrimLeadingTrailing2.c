#include<stdio.h>
#include<stdlib.h>
#define MXSZ 100

char* TrimLeadingTrailing(char *ctr);

int main(){

	char str[MXSZ];
	char *ns;

	printf("Enter a string : ");
	gets(str);

	printf("Original string - \n'%s' \n",str);

	ns = TrimLeadingTrailing(str);

	printf("String after trimming all the extra white-spaces - \n'%s' \n",ns);

	return 0;
}

char* TrimLeadingTrailing(char *ftr){

	char *newString;
	int i,index;

	newString = (char*)malloc(MXSZ);

	index=0;
	while(*(ftr+index) == ' ' || *(ftr+index) == '\t' || *(ftr+index) == '\n'){
			index++;
	}

	if(index != 0){
		i=0;
		while(*(ftr+i+index) != '\0'){
			*(newString+i) = *(ftr+i+index);
			i++;
		}
		*(newString+i) = '\0';
	}

	index = -1;
	i = 0;
	while(*(newString+i) != '\0'){
		if(*(newString+i) != ' ' && *(newString+i) != '\t' && *(newString+i) != '\n'){
			index = i;
		}
		i++;
	}
	*(newString+index+1) = '\0';

	return newString;
}