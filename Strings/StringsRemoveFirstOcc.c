#include<stdio.h>
#include<string.h>
#define MXSZ 100

void RemoveFirstOcc(char *ctr,char);

int main(){

	char str[MXSZ],ch;

	printf("Enter a string : ");
	gets(str);

	printf("Input chararcter to remove : ");
	ch = getchar();

	printf("Original string - %s \n",str);

	RemoveFirstOcc(str,ch);

	printf("Modified string - %s \n",str);

	return 0;
}

void RemoveFirstOcc(char *ftr, char x){

	int i;

	while(*ftr){
		if(*ftr == x){
			i=0;
			while(*(ftr+i)){
				*(ftr+i) = *(ftr+i+1);
				i++;
			}
			ftr--;
			break;
		}
		ftr++;
	}

}
