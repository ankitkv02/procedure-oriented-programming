#include<stdio.h>
#include<math.h>
#define SIZE 16
#define BASE 2

int main()
{
	char binary[SIZE+1];
	int i,decimal;

	printf("Enter a %d-bit binary number : ",SIZE);
	gets(binary);

	decimal = 0;
	for(i=0; i<SIZE; i++)
	{
		if(binary[i] == '1')
		{
			decimal += pow(BASE,(SIZE - (i+1)));
		}
	}

	if(binary[0] == '1')
		decimal *= -1;

	printf("Binary input : %s \n",binary);
	printf("Decimal form : %d \n",decimal);

	return 0;
}