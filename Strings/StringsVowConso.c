#include<stdio.h>
#define MXSZ 50

int main(){

	char str[MXSZ];
	int i,vow,cons;

	printf("Enter a string : ");
	gets(str);

	i = vow = cons = 0;
	while(str[i] != '\0'){
		if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)){
			if(str[i] == 'a' || str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'){
				vow++;
			} else if(str[i] == 'A' || str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U'){
				vow++;
			} else{
				cons++;
			}
		}
		i++;
	}

	printf("Vowels = %d \nConsonnts = %d \n",vow,cons);

	return 0;
}