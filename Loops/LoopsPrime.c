#include<stdio.h>
#include<math.h>

int main()

{
	int num,i,flag;

	printf("Enter a number to find out if it's a Prime number : ");
	scanf("%d",&num);

	flag=1;
	for(i=2; i<num/2; i++){
		if(num%i == 0){
			flag = 0;
		}
	}

	if(flag == 1){
		printf("%d is found to be a prime number. \n",num);
	} else{
		printf("%d is not a prime number. \n",num);
	}

	return 0;
}