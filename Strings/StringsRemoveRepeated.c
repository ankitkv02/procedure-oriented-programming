#include<stdio.h>
#include<string.h>
#define MXSZ 100

void RemoveRepeatedChar(char *ctr);

int main(){

	char str[MXSZ];

	printf("Input a string : ");
	gets(str);

	printf("Original string - %s \n",str);

	RemoveRepeatedChar(str);

	printf("Modified string - %s \n",str);

	return 0;
}

void RemoveRepeatedChar(char *ftr){

	int i,j,k,len;

	len = strlen(ftr);
	for(i=0; i<len; i++){
		for(j=i+1; j<len; j++){
			if(*(ftr+i) == *(ftr+j)){
				for(k=j; k<len; k++){
					*(ftr+k) = *(ftr+k+1);
				}
				len--;
				j--;
			}		
		}
	}
}