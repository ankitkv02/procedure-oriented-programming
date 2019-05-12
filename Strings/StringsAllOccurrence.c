#include<stdio.h>
#define MXSZ 100

int main(){

	char str[MXSZ],ch;
	char *s = str;
	int i;

	printf("Input a string : ");
	gets(str);

	printf("Enter a character you want to know no. of occurrence for : ");
	ch = getchar();

	printf("%c occurs at the index - ",ch);
	i=0;
	while(*(s+i)){
		if(*(s+i) == ch){
			printf("%d, ",i);
		}
		i++;
	}

	return 0;
}