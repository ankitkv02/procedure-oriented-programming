#include<stdio.h>

int main(){

	int i;
	char c[] = "I am ankit."/*{'a','b','c','\0'}*/;

	/*printf("Write a message : ");
	gets(c);*/

//	c[5] = '\0';

	printf("%s \n",c);

	puts(c);

	for(i=0; i<14; i++){
		printf("%c",c[i]);
	}
	printf("\n");

	for(i=0; i<14; i++){
		putchar(c[i]);
	}
	printf("\n");

	return 0;
}