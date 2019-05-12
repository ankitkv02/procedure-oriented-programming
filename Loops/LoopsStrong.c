#include<stdio.h>
#include<math.h>

int main()

{
	int num,i,temp,lastDig,fact,sum=0;

	printf("Enter a number to check if it's a Strong number : ");
	scanf("%d",&num);

	temp = num;
	while(temp>0)
	{	
		lastDig = temp%10;
		temp /= 10;
		
		fact = 1;
		for(i=lastDig; i>=1; i--)	
			fact *= i;  
		
		sum += fact;
	}
	if(sum == num)
		printf("Congratulations! %d is found to be a Strong number! \n",num);

	else
		printf("No, %d ain't a Strong Number. \n",num);
		
	return 0;
}