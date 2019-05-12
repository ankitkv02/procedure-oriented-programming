#include<stdio.h>
#include<string.h>
#define MXSZ 50

int main(){

    char str[MXSZ],rev[MXSZ];
    int j,i,len=0,res;
    printf("Enter a string : ");
    gets(str);

    i=0;
    while(str[i++]) len++;

    i--;
    j=0;
    while(len>=0){
        rev[j++] = str[--i];
        len--;
    }
    rev[j] = '\0';

    res = strcmp(str,rev);

    printf("Original string - %s \n",str);
    printf("Reversed string - %s \n",rev);

    if(res == 0){
        printf("The string is found to be palindrome. \n");
    } else{
        printf("The string is not palindrome. \n");
    }

    return 0;
}