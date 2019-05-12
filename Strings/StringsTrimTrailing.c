#include<stdio.h>
#define MXSZ 100

void TrimTrailing(char *ctr);

int main(){

    char str[MXSZ];

    printf("Enter a string : ");
    gets(str);

    printf("Original string - \n'%s' \n",str);

    TrimTrailing(str);

    printf("String after trimming all the trailing white-spaces - \n'%s' \n",str);

    return 0;
}

void TrimTrailing(char *ftr){

    int i,index;

    index = -1;
    i = 0;
    while(*(ftr+i) != '\0'){
        if(*(ftr+i) != ' ' && *(ftr+i) != '\t' && *(ftr+i) != '\n'){
            index = i;
        }
        i++;
    }

    *(ftr+index+1) = '\0';
}