#include<stdio.h>
#define MXSZ 100

void ConcatenateStrings(char *a,char *b);

int main(){

	char str1[MXSZ],str2[MXSZ];

	printf("Input string1 : ");
	gets(str1);

	printf("Input string2 : ");
	gets(str2);

	printf("String1 before concatenation - \n'%s' \n",str1);
	printf("String2 before concatenation - \n'%s' \n",str2);

	ConcatenateStrings(str1,str2);

	printf("Resultant string - \n'%s' \n",str1);

	return 0;
}

void ConcatenateStrings(char *x,char *y){

	while(*x){
		x++;
	}

	*(x++) = ' ';
	while(*y){
		*(x++) = *(y++);
	}
	*x = '\0';

}