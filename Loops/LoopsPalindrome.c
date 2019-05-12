#include<stdio.h>
#include<math.h>

int main()

{
	int original,temp,reverse,digits;

	printf("Enter a number to check if it's a palindrome number : ");
	scanf("%d",&original);

	temp = original;
	reverse = 0;
	while(temp != 0)
	{
		digits = (int)log10(temp);
		reverse = reverse + ((temp % 10) * pow(10,digits));
		temp /= 10; 
	}
	if(reverse == original)
		printf("Congratulations! %d is found to be a palindrome number! \n",original);

	else
		printf("%d ain't a palindrome number at all. \n",original);

	return 0;
}