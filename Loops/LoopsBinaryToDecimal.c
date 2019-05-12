#include<stdio.h>
#include<math.h>
#define BASE 2

int main()
{
	long long binary,tempBinary;
	int digit,places,decimal;

	printf("Enter any binary number : ");
	scanf("%lld",&binary); 

	places = 0;
	decimal = 0;
	tempBinary = binary;
	while(tempBinary != 0)
	{
		digit = tempBinary%10;
		if(digit == 1)
		{
			decimal += pow(BASE,places);
		}
		places++;
		tempBinary /= 10;
	}

	printf("Original binary : %lld \n",binary);
	printf("Decimal form : %d \n",decimal);

	return 0;
}