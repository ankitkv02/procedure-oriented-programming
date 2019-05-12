#include<stdio.h>
#include<math.h>
#define BASE 10

int main()
{
	long long num,temp;
	int i,freq[BASE],lastDig;

	printf("Enter a number to find its digits frequency : ");
	scanf("%lld",&num);

	for(i=0; i<=9; i++)
		freq[i] = 0;

	temp = num;
	while(temp != 0)
	{
		lastDig = temp%10;

		freq[lastDig]++;

		temp /= 10;
	}

	for(i=0; i<=9; i++)
		if(freq[i]>0)
			printf("Frequency of %d - %d \n",i,freq[i]);
	
	return 0;
}