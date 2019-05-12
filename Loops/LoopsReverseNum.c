#include<stdio.h>
#include<math.h>

int main()

{
	int num,temp,reverse,digits;

	printf("Enter a number to reverse its digits : ");
	scanf("%d",&num);

	temp = num;
	reverse = 0;
	while(temp != 0)
	{
	/*	reverse = (reverse * 10) + (temp % 10);
		temp /= 10; */

		digits = (int)(log10(temp));
		reverse = reverse + ((temp % 10) * pow(10,digits));
		temp /= 10;  
	}
	printf("%d, after reversing digits is : %d \n",num,reverse); 

	return 0;
}	