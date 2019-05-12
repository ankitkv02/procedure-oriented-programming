#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* DupeString(char *c,int);

int main(){

	char x[] = "I am Ankit.";
	char *p;
	int len;

	for(len=0; x[len] != '\0'; len++){
		;
	}

	p = DupeString(x,len);

	/*for(i=0; i<=len; i++){
		printf("%c",*(p+i));
	}
	printf("\n");*/

	printf("%s \n",p);

	return 0;
}

char* DupeString(char *a,int x){

	char *ch;

	ch = (char *)malloc(x+1*sizeof(char));

	for(int i=0; i<=x; i++){
		*(ch+i) = *(a+i);
	}
	ch[x+1] = '\0';

//	*ch = a;

	return ch;
}