#include<stdio.h>
#include<math.h>

int SumEvOdd(int,int);

int main()
{
	int low,upp,s;

	printf("Enter the lower limit : ");
	scanf("%d",&low);

	printf("Enter the upper limit : ");
	scanf("%d",&upp);

	if(low>upp)
		printf("Invalid limits! \n");

	else
		s = SumEvOdd(low,upp);

	printf("Sum of all the odd/even numbers between %d and %d is: %d \n",low,upp,s);

	return 0;
}

int SumEvOdd(int x,int y)
{
	
	if(x>y)
		return 0;
			
	return x+SumEvOdd(x+2,y);	
}