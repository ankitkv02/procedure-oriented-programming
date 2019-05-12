#include<stdio.h>
#define MXSZ 50

int main(){

	char str[MXSZ];
	int i;

	printf("Enter a string : ");
	gets(str);

	i = 0;
	while(str[i] != '\0'){
		if(str[i] >= 97 && str[i] <= 122){
			str[i] -= 32;
		}
		i++;
	}

	printf("The string with all the upper alphabetical characters is - ");
	puts(str);

	return 0;
}