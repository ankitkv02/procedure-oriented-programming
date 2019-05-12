#include<stdio.h>
#define SIZE 11

void ReverseArray(int*,int);
void Swap(int*,int*);

int main(){

	int x[] = {1,2,3,4,5,6,7,8,9,10,11};
	int i=0,j,swap,c;

	/*j = SIZE-1;
	while(i<j){
		swap = *(x+i);
		*(x+i) = *(x+j);
		*(x+j) = swap;
		i++;
		j--;
	}*/

	c = 9;
	ReverseArray(x+c,SIZE-c);

	for(i=0; i<SIZE; i++){
		printf("%d ",*(x+i));
	}
	printf("\n");

	if(&x+2<&x+6){
		printf("true! \n");
		printf("%p,%p \n",&x+2,&x+6);
	}

	return 0;
}

void ReverseArray(int *a,int n){

	int *b = a+n-1;

	while(a<b){
		Swap(a,b);
		a++;
		b--;
	}
}

void Swap(int *m,int *n){

	int temp;

	temp = *m;
	*m = *n;
	*n = temp;
}