#include<stdio.h>
#include<math.h>

int isPalindrome(int);
int numRev(int);

int main(){

	int num;

	printf("Enter any number to find out if it's a palindrome number : ");
	scanf("%d",&num);
	
	if(isPalindrome(num)){
		printf("%d is found to be a palindrome number! \n",num);
	} else{
		printf("%d is not a palindrome number. \n",num);
	}

	return 0;
}

int isPalindrome(int n){
	
	if(n == numRev(n)){
		return 1;
	}

	return 0;
}

int numRev(int m){

//	int digits = (int)log10(m);
	int digits = 0;
	int temp = m;
	while(temp > 10){
		digits++;
		temp /= 10;
	}
//	digits--;

	if(m == 0){
		return m;
	}

	return (m%10) * pow(10,digits) + numRev(m/10);
}