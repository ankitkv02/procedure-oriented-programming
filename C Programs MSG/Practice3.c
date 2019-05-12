#include<stdio.h>
#include<math.h>

int isPrime(int);
int isPalindrome(int);
int isStrong(int);
int isArmstrong(int);
int isPerfect(int);

int main(){

	int lowerLimit,upperLimit;

	printf("Define lower limit : ");
	scanf("%d",&lowerLimit);

	printf("Define upper limit : ");
	scanf("%d",&upperLimit);

	for(int num=lowerLimit; num<=upperLimit; num++){
		
		if(isPrime(num)){
			printf("%d is a Prime number. \n",num);
		}

		if(isPerfect(num)){
			printf("%d is a Perfect number. \n",num);
		}

		if(num > 10 && isPalindrome(num)){
			printf("%d is a Palindrome number. \n",num);
		}

		if(isStrong(num)){
			printf("%d is a Strong number. \n",num);
		}

		if(num > 10 && isArmstrong(num)){
			printf("%d is a Armstrong number. \n",num);
		}
	}

	return 0;
}

int isPrime(int a){

	for(int i=2; i<=a/2; i++){
		if(a%i == 0){
			return 0;
		}
	}

	return 1;
}

int isPerfect(int b){

	int factSum;

	factSum = 0;
	for(int i=1; i<b; i++){
		if(b%i == 0){
			factSum += i;
		}
	}

	return b == factSum;
}

int isPalindrome(int c){

	int temp,rev,curr,digits;

	temp = c;
	rev = 0;
	while(temp > 0){
		curr = temp%10;
		digits = (int)log10(temp);
		rev += curr*pow(10,digits);
		temp /= 10;
	}

	return rev == c;
}

/*int isPalindrome(int c){

	int digits = (int)log10(c);
	int startDig,endDig,tempDig,num;
	int times = (digits/2)+1;

	num = c;
	while(times){
		tempDig = (int)log10(num);		//Inaccurate code. Resolve it.
		endDig = num%10;				// '08' stores as '8'  	
		startDig = num/pow(10,tempDig);
//		printf("%d, %d \n",startDig,endDig);
		if(startDig != endDig){
			return 0;
		}
		num %= (int)(startDig*pow(10,tempDig));
		num /= 10;
		times--;
	}

	return 1;
}*/

int isStrong(int d){

	int temp,curr,fact,factSum;

	temp = d;
	factSum = 0;
	while(temp > 0){
		curr = temp%10;
		fact = 1;
		while(curr){
			fact *= curr;
			curr--;
		}
		factSum += fact;
		temp /= 10;
	}

	return factSum == d;
}

int isArmstrong(int e){

	int curr,digits,sum,temp;

	digits = (int)log10(e)+1;

	temp = e;
	sum = 0;
	while(temp > 0){
		curr = temp%10;
		sum += pow(curr,digits);
		temp /= 10;
	}

	return sum == e;
}