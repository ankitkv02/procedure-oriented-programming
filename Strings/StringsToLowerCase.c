#include<stdio.h>
#include<string.h>
#define SIZE 20

int main(){

	char str[SIZE];
	int i;

	printf("Enter a string : ");
	gets(str);

	i = 0;
	while(str[i] != '\0'){
		if(str[i] >= 65 && str[i] <= 90){
			str[i] += 32;
		}
		i++;
	}

	printf("String with all the lower alphabetical characters is : %s \n",str);

	return 0;
}