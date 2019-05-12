#include<stdio.h>
#include<string.h>
#include<sys/ioctl.h>

#define MXSZ 100

void PrintInCenter(char*,int,int);

int main(){

    struct winsize k;
    ioctl(0,TIOCGWINSZ,&k);

    int cols = k.ws_col;
    int rows = k.ws_row;
    char str[MXSZ];

    printf("What would you like to print at the center of the screen? ");
    gets(str);

    PrintInCenter(str,cols,rows);

    return 0;
}

void PrintInCenter(char *ptr,int c,int r){

    int strLen = strlen(ptr)/2;

    for(int i=0; i<=r; i++){
        if(i == r/2){
            printf("%*s",c/2+strLen,ptr);
        }
        printf("\n");
    }
}