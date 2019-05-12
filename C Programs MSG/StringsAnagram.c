#include<stdio.h>
#include<string.h>
#define MAX 50

int CompAnagram(char*,char*);

int main(){

	char str1[MAX],str2[MAX];

	printf("Input first string : ");
	gets(str1);

	printf("Input second string : ");
	gets(str2);

	if(CompAnagram(str1,str2)){
		printf("Both the strings are anagram to each other. \n");
	} else{
		printf("The input strings are not anagram. \n");
	}

	return 0;
}

int CompAnagram(char *a,char *b){

	int i;

	if(strlen(a) != strlen(b)){
		return 0;
	} else{
		i=0;
		while(*(a+i) != '\0'){
			int j=0;
			int found=0;
			while(*(b+j) != '\0'){
				if(*(a+i) == *(b+j)){
					found = 1;
				}
				j++;
			}
			if(!found){
				return 0;
			}
			i++;
		}

		return 1;
	}	
}