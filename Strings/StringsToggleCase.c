#include<stdio.h>
#define MXSZ 50

int main(){

	char str[MXSZ];
	int i;

	printf("Enter a string : ");
	gets(str);

	for(i=0; str[i] != '\0'; i++){
		if(str[i] >= 65 && str[i] <= 90){
			str[i] += 32;
		} else if(str[i] >= 97 && str[i] <= 122){
			str[i] -= 32;
		}
	}

	printf("The toggle-cased string is : %s \n",str);

	return 0;
}