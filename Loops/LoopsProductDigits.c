#include<stdio.h>
#include<math.h>

int main()

{
	int num,temp;
	long long DigiProduct;

	printf("Enter a number to find the product of its digits : ");
	scanf("%d",&num);

	temp = num;
	DigiProduct =1;
	while(temp != 0)
	{
		DigiProduct *= temp%10;
		temp /= 10;
	}
	printf("The product of all the digits in %d, is : %lld \n",num,DigiProduct);

	return 0;
}