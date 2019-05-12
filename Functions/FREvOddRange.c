#include<stdio.h>
#include<math.h>

void EvenRange(int,int);
void OddRange(int,int);

int main()
{
	int low,upp;

	printf("Enter the lower limit : ");
	scanf("%d",&low);

	printf("Enter the upper limit : ");
	scanf("%d",&upp);

	printf("Even numbers between %d and %d : \n",low,upp);
	EvenRange(low,upp);
	
	printf("\nOdd numbers between %d and %d : \n",low,upp);	
	OddRange(low,upp);
	printf("\n");

	return 0;
}

void EvenRange(int x,int y)
{
	if(y>=x)
	{
		EvenRange(x,y-1);
		if(y%2==0)
		{	
			printf("%d, ",y);
		}
	}
}

void OddRange(int x,int y)
{
	if(y>=x)
	{
		OddRange(x,y-1);
		if(y%2!=0)
		{	
			printf("%d, ",y);
		}
	}
}