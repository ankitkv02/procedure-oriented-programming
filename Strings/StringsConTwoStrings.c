#include<stdio.h>
#include<string.h>
#define SIZE 50

int main(){

	char str1[SIZE],str2[SIZE];
	int i,l1,l2;

	printf("Enter first string : ");
	gets(str1);

	printf("Enter second string : ");
	gets(str2);

	l1 = strlen(str1);
	l2 = strlen(str2); 

	for(i=0; i<=l2; i++){
		str1[l1] = ' ';
		str1[l1+1+i] = str2[i];
	}

	printf("Concatenated string : %s \n",str1);

	return 0;
}