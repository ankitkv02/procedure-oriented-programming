#include<stdio.h>
#include<string.h>
#define MXSZ 50

int main(){

	char a[MXSZ],b[MXSZ];
	int i;

	printf("Enter first string : ");
	gets(a);

	printf("Enter second string : ");
	gets(b);

	for(i=0; a[i] != '\0'; i++){
		if(a[i] != b[i]){
			break;
		}
		;
	}

	if(strlen(b) != i){
		printf("Strings are not identical. \n");
	} else{
		printf("Strings are found to be identical. \n");
	}

	return 0;
}