#include<stdio.h>
#define MXSZ 100

void TrimLeadingTrailing(char *ctr);

int main(){

	char str[MXSZ];

	printf("Enter a string : ");
	gets(str);

	printf("Original string - \n'%s' \n",str);

	TrimLeadingTrailing(str);

	printf("String after trimming all the white-spaces - \n'%s' \n",str);

	return 0;
}

void TrimLeadingTrailing(char *ftr){

	int i,index;

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

	i=0;
	index = -1;
	while(*(ftr+i) != '\0'){
		if(*(ftr+i) != ' ' && *(ftr+i) != '\t' && *(ftr+i) != '\n'){
			index = i;
		}
		i++;
	}
	*(ftr+index+1) = '\0';
}