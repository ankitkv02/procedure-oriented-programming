#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[]){

	int sum;

	if(argc > 1){
		sum = 0;
		argc--;
		while(argc){
			sum += atoi(argv[argc]);
			argc--;
		}
		printf("The sum of integer arguments is - %d \n",sum);
	} else{
		printf("No arguments passed. \n");
		printf("%s \n",argv[0]);
	}

	return 0;
}