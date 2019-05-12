#include<stdio.h>
#include<stdlib.h>
#define MXSZ 100

char* FixExtraWhiteSpaces(char *ctr);

int main(){

    char str[MXSZ];
    char *ns;

    printf("Enter a string : ");
    gets(str);

    printf("Original string - \n'%s' \n",str);

    ns = FixExtraWhiteSpaces(str);

    printf("String after fixing all the extra white-spaces - \n'%s' \n",ns);

    return 0;
}

char* FixExtraWhiteSpaces(char *ftr){

    char *newString;
    int index,i,j;

    newString = (char*)malloc(MXSZ);

    index = 0;
    while(*(ftr+index) == ' ' || *(ftr+index) == '\t' || *(ftr+index) == '\n'){
        index++;
    }

    if(index != 0){
        i=0;
        while(*(ftr+index+i) != '\0'){
            *(newString+i) = *(ftr+index+i);
            i++;
        }
        *(newString+i) = '\0';
    }

    i=0;
    j=0;
    while(*(newString+i) != '\0'){
        if(*(newString+i) == ' '){
            *(newString+j) = ' ';
            j++;

            while(*(newString+i) == ' '){
                i++;
            }
        }
        *(newString+j) = *(newString+i);
        j++;
        i++;
    }
   *(newString+j) = '\0';

    index = -1;
    i = 0;
    while(*(newString+i) != '\0'){
        if(*(newString+i) != ' ' && *(newString+i) != '\t' && *(newString+i) != '\n'){
            index = i;
        }
        i++;
    }
    *(newString+index+1) = '\0';
    
    return newString;
}