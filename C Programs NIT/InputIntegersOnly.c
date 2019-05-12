#include<stdio.h>
#include<stdlib.h>
#include<curses.h>
using namespace std;


#define getch() wgetch(stdscr)

int GetIntegersOnly();

int main(){

    int x=0;

    x = GetIntegersOnly();

    printf("The number you have entered is - %d \n",x);

    return 0;
}

int GetIntegersOnly(){

    int num=0,ch;

    do{
        ch = getchar();         //How to use getch() here?
        if(48 <= ch && ch <= 57){
            printf("%c",ch);
            num = num*10+(ch-48);
        }
        if(ch == 13){
            break;
        }
    }while(1);

    return num;
}