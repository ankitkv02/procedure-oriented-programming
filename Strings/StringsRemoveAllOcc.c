#include<stdio.h>
#include<string.h>
#define MXSZ 100

void RemoveAllOccurrence(char *ctr,char);

int main(){

	char str[MXSZ],ch;

	printf("Input a string : ");
	gets(str);

	printf("Input the character you want to remove : ");
	ch = getchar();

	printf("Original String - %s \n",str);

	RemoveAllOccurrence(str,ch);

	printf("Modified String - %s \n",str);

	return 0;
}

/*void RemoveAllOccurrence(char *ftr,char x){

	int i,j,len;

	len = strlen(ftr);

	for(i=0; i<len; i++){
		if(*(ftr+i) == x){
			for(j=i; j<len; j++){
				*(ftr+j) = *(ftr+j+1);
			}
//			len--;
//			i--;
		}
	}
}*/

void RemoveAllOccurrence(char *ftr,char x){

	int i;

	while(*ftr){
		if(*ftr == x){
			i=0;
			while(*(ftr+i)){
				*(ftr+i) = *(ftr+i+1);
				i++;
			}
			ftr--;
		}
		ftr++;
	}
}