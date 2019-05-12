#include<stdio.h>
#define MXSZ 50

int main(){

	char str[MXSZ];
	int i,alph,chr,dig;

	printf("Enter a string : ");
	gets(str);

	i = alph = dig = chr = 0; 
	while(str[i] != '\0'){
		if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 96 && str[i] <= 122)){
			alph++;
		} else if(str[i] >= 48 && str[i] <= 57){
			dig++;
		} else{
			chr++;
		}
		i++;
	}

	printf("Alphabets = %d \nDigits = %d \nSpecial characters = %d \n",alph,dig,chr);

	return 0;
}