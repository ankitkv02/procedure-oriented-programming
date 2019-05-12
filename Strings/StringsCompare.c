#include<stdio.h>
#define MAXSIZE 50

int CompStr(char x[],char y[]);

int main(){

	char str1[MAXSIZE],str2[MAXSIZE];
	int i,len1,len2,res;

	printf("Enter first string : ");
	gets(str1);

	printf("Enter second string : ");
	gets(str2);

	res = CompStr(str1,str2);
	
	if(res == 0){
		printf("Strings are identical. \n");
	} else if(res < 0){
		printf("First string is lexicographically shorter than the second one. \n");
	} else{
		printf("First string is lexicographically greater than the second one. \n");
	}

	return 0;
}

int CompStr(char x[],char y[]){

	int i;

	i = 0;
	while(x[i] == y[i]){
		if(x[i] == '\0' && y[i] == '\0'){
			break;
		}
		i++;
	}

	return x[i] - y[i];
}