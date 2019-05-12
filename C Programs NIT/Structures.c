#include<stdio.h>
#include<string.h>

struct Emp{

	int eNumber;
	char eName[20];
	float eSal;
};

int main(){

	struct Emp e /*= {1001, "Ankit", 50000}*/;

	e.eNumber = 1001;
	strcpy(e.eName,"Ankit");
	e.eSal = 50000;

	printf("Employee number : %d \n",e.eNumber);
	printf("Employee name : %s \n",e.eName);
	printf("Employee salary : %.2f \n",e.eSal);
	printf("Size of the Structure (in bytes) : %lu \n",sizeof(e));

	return 0;
}