#include<stdio.h>

int main(){

	char x[100];
	int i;

	for(i=0; i<100; i++){
		if(feof(stdin)){
			break;
		} else{
			scanf("%c",&x[i]);
		}
	}

	while(i>=0){
		printf("%c ",x[i]);
		i--;
	}
	printf("\n");

	return 0;
}