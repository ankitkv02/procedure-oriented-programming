#include<stdio.h>

int Area(int,int);
int Volume(int,int,int);

int main(){

	int answer;
	int (*ptr)(int,int,int);  //decrease the signature from 3 to 2 arguments for storing address of Area function.

	/*ptr = &Area;
	answer = ptr(12,4);
	printf("Area is : %d \n",answer);*/

	ptr = &Volume;
	answer = ptr(2,4,10);
	printf("The volume is : %d \n",answer);

	return 0;
}

int Area(int a,int b){

	return a*b;
}

int Volume(int x,int y,int z){

	return x*y*z;
}