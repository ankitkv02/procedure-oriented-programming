#include<stdio.h>

int main()
{
	int octalConst[] = {0,1,10,11,100,101,110,111};
	long long binary,tempBinary,octal;
	int i,place,digit;

	printf("Enter any binary number : ");
	scanf("%lld",&binary);

	place = 1;
	octal = 0;

	tempBinary = binary;
	while(tempBinary != 0)
	{
		digit = tempBinary%1000;

		for(i=0; i<8; i++)
		{
			if(octalConst[i] == digit)
			{
				octal += i*place;
				break;	
			}
		}

		tempBinary /= 1000;
		place *= 10;
	}

	printf("Binary number : %lld \n",binary);
	printf("Corresponding octal number : %lld \n",octal);

	return 0;
}