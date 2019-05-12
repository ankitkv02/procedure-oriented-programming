#include<stdio.h>

int Add(int,int);

int main(){

    int (*p)(int,int) = Add;
    int res;

    res = p(2,9);

    printf("sum - %d\n",res);

    return 0;
}

int Add(int a,int b){

    return a+b;
}