#include<stdio.h>
#define MXCHR 255
#define MXSZ 100

int main(){

	char str[MXSZ];
	int freq[MXCHR];
	int i,ascii,min;

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

	min=0;
	for(i=0; i<MXCHR; i++){
		if(freq[i] != 0){
			if(freq[min] == 0 || freq[i] < freq[min]){
				min = i;
			}
		}	
	}

	printf("The lowest occurring character in the input string is - '%c' occurring %d times. \n",min,freq[min]);

	return 0;
}