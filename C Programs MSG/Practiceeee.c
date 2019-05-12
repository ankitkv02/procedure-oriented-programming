#include<stdio.h>
#include<math.h>

int isPalindrome(int);

int main(){

	int num;

	printf("Enter a number : ");
	scanf("%d",&num);

	/*num /= 10;
	printf("Number = %d \n",num);
	num %= 10;
	printf("Number = %d \n",num);*/

	if(isPalindrome(num)){
		printf("%d is found to be a Palindrome number. \n",num);
	} else{
		printf("%d is a composite number. \n",num);
	}

	return 0;
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

	int rev,temp,curr;

	rev = 0;
	temp = c;
	while(temp > 0){
		curr = temp%10;
		rev *= 10;
		rev += curr;
		temp /= 10;
	}

	printf("%d \n",rev);

	return c == rev;
}*/

/*int isPalindrome(int c){

	int digits = (int)log10(c);
	int startDig,endDig,tempDig,num;
	int times = (digits/2)+1;

	num = c;
	while(times){
		tempDig = (int)log10(num);		//Inaccurate code. Resolve it.
		endDig = num%10;				// '08' stores as '8'
		startDig = num/pow(10,tempDig);
		printf("%d %d \n",startDig,endDig);
		if(startDig != endDig){
			return 0;
		}
		num %= (int)(startDig*pow(10,tempDig));
		num /= 10;
		times--;
	}

	return 1;
}*/