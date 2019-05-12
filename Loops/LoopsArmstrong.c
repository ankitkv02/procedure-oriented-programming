#include<stdio.h>
#include<math.h>

int main()

{
	int originalNum,num,digits,lastdig,sum=0;

	printf("Enter a number to find out if it's an Armstrong Number : ");
	scanf("%d",&originalNum);

	digits =(int)log10(originalNum) + 1;

	num = originalNum;

	while(num > 0)
	{
		lastdig = num%10;
		sum += pow(lastdig,digits);
		num /= 10;
	}	

	if(sum == originalNum)
		printf("Congratulations! %d is an Armstrong Number! \n",originalNum);

	else
		printf("%d is a Composite Number. \n",originalNum);

	return 0;
}