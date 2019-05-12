#include<stdio.h>
#define MXSZ 100

int CompareStrings(char *a,char *b);

int main(){

	char str1[MXSZ],str2[MXSZ];
	int res;

	printf("Enter string1 : ");
	gets(str1);

	printf("Enter string2 : ");
	gets(str2);

	res = CompareStrings(str1,str2);

	if(res == 0){
		printf("Both the strings are lexicographically equal. \n");
	} else if(res > 0){
		printf("String1 is lexicographically greater than the second one. \n");
	} else{
		printf("String1 is lexicographically smaller than the second one. \n");
	}

	return 0;
}

int CompareStrings(char *a,char *b){

	while(*a && *b){
		if(*(a) != *(b)){
			break;
		}
		a++;
		b++;
	}

	return (*a)-(*b);
}