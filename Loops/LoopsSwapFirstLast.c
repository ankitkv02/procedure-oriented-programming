#include<stdio.h>
#include<math.h>

int main()

{
	int num,first,last,digits,SwappedNum;

	printf("Enter a number to swap its first and last digits : ");
	scanf("%d",&num);

	last = num % 10;

	digits = (int)log10(num);               // We can also find first digit using a while loop.

	first = (int)(num / pow(10,digits));

/*	SwappedNum = last;
	SwappedNum *= (int)pow(10,digits);
	SwappedNum += num%((int)pow(10,digits));
	SwappedNum -= last;
	SwappedNum += first;  */

	SwappedNum = last*pow(10,digits)+(num-first*pow(10,digits))-last+first;

	printf("%d with swapped first and last digits, is : %d \n",num,SwappedNum);

	return 0;
}