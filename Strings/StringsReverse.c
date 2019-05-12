#include<stdio.h>
#include<string.h>
#define SIZE 20

int main(){

	char str[SIZE],i,j,swap;

	printf("Enter a string : ");
	gets(str);

	printf("Original string : %s \n",str);

	i = 0;
	j = strlen(str)-1;
	while(i < j){
		swap = str[i];
		str[i] = str[j];
		str[j] = swap;
		i++;
		j--;
	}

	printf("Reversed string : %s \n",str);

	return 0;
}