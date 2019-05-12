#include<stdio.h>
#include<stdlib.h>
#define DATA_SIZE 1000

int main(){

	char data[DATA_SIZE];
	int age;
	char name[20];
	float salary;

	FILE *fPtr;

	fPtr = fopen("‎⁨filePrime.txt","w");

	if(fPtr == NULL){
		printf("Unable to create file. \n");
		exit(EXIT_FAILURE);
	}

	printf("Enter contents to store in file : \n");
	fgets(data,DATA_SIZE,stdin);

	fputs(data,fPtr);

	/*printf("Enter your name : ");
	gets(name);
	fprintf(fPtr,"Name - %s\n",name);

	printf("Enter your age : ");
	scanf("%d",&age);
	fprintf(fPtr,"Age - %d\n",age);

	printf("Enter your salary : ");
	scanf("%f",&salary);
	fprintf(fPtr,"Salary - %.2f\n",salary);*/

	fclose(fPtr);

	printf("File created and saved successfully. \n");

	return 0;
}