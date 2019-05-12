#include<stdio.h>
#include<string.h>
#define SIZE 20

void ReverseString(char ctr[]);

int main(){

	char str[SIZE];

	printf("Enter a string : ");
	gets(str);

	printf("Original string : %s \n"str);

	ReverseString(str);

	printf("Reversed string : %s \n",str);

	return 0;
}

void ReverseString(char btr[]){

	int i,j,swap;

	i = 0;
	j = strlen(btr)-1;
	while(i<j){
		swap = btr[i];
		btr[i] = btr[j];
		btr[j] = swap;
		i++;
		j--;
	}
}