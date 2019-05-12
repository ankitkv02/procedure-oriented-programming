#include<stdio.h>
#include<math.h>

int isPalindrome(int);
int Reverse(int);

int main()
{
	int num;

	printf("Enter a number to check if it's Palindrome : ");
	scanf("%d",&num);

	if(isPalindrome(num))
		printf("Yes! %d is found to be a Palindrome number! \n",num);

	else
		printf("No, %d ain't a Palindrome number at all. \n",num);

	return 0;
}

int isPalindrome(int x)
{
	return (x==Reverse(x));
}

int Reverse(int num)
{
	int digits = (int)log10(num);

	if(num == 0)
		return num;

	return num%10 * pow(10,digits) + Reverse(num/10);
}