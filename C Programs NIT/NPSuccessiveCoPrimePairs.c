#include<stdio.h>

int areCoPrime(int,int);

int main(){

	int n,cur,prev;

	printf("How many numbers you want to test for co-prime pairs? ");
	scanf("%d",&n);

	printf("Enter a number : ");
	scanf("%d",&prev);

	while(n>1){
		printf("Enter the next number : ");
		scanf("%d",&cur);
		if(areCoPrime(prev,cur)){
			printf("%d, %d\n",prev,cur);
		}
		prev = cur;
		n--;
	}

	return 0;
}

int areCoPrime(int a,int b){

	int temp;
	
	while(!(b==0)){
		temp = a;
		a = b;
		b = temp%b;
	}
	if(a==1){
		return 1;
	} else{
		return 0;
	}
}