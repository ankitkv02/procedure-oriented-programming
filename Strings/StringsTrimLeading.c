#include<stdio.h>
#define MXSZ 100

void TrimLeading(char *ctr);

int main(){

	char str[MXSZ];

	printf("Enter a string : ");
	gets(str);

	printf("Original string - \n'%s' \n",str);

	TrimLeading(str);

	printf("String after trimming leading white-spaces. \n'%s' \n",str);

	return 0;
}

void TrimLeading(char *ftr){

	int index,i;

	index = 0;
	while(*(ftr+index) == ' ' || *(ftr+index) == '\t' || *(ftr+index) == '\n'){
		index++;
	}

	if(index != 0){
		i=0;
		while(*(ftr+i+index) != '\0'){
			*(ftr+i) = *(ftr+i+index);
			i++;
		}
		*(ftr+i) = '\0';
	}
}