#include<stdio.h>

void PrintMonthName(int);

int main(){

	int month;

	printf("Enter any number between 1-12 to print its corresponding month name : ");
	scanf("%d",&month);

	PrintMonthName(month);

	return 0;
}

void PrintMonthName(int m){

	char *month_names[] = {"January","Fabruary","March","April","May","June","July","August","September","October","November","December"};

	if(1 <= m && m <= 12){
		printf("%s \n",*(month_names+(m-1)));
	} else{
		printf("Invalid Input. \n");
	}
}