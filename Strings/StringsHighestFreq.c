#include<stdio.h>
#define MXSZ 100
#define MXCHR 255

int main(){

	char str[MXSZ];
	int freq[MXCHR];
	int i,ascii,max;

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

	max = 0;
	for(i=0; i<MXCHR; i++){
		if(freq[i] > freq[max]){
			max = i;
		}
	}

	printf("The highest occurring character in the string is - '%c' occurring %d times. \n",max,freq[max]);

	return 0;
}