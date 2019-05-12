#include<stdio.h>
#define MXSZ 100
#define MXCHR 255

int main(){

	char str[MXSZ];
	int freq[MXCHR];
	int i,ascii;

	printf("Enter a string : ");
	gets(str);

	for(i=0; i<MXCHR; i++){
		freq[i] = 0;
	}

	i=0;
	while(str[i] != '\0'){
		ascii = (int)str[i];
		freq[ascii] += 1;
		i++;
	}

	for(i=0; i<MXCHR; i++){
		if(freq[i] > 0){
			printf("'%c' occurs %d times \n",i,freq[i]);
		}
	}

	return 0;
}