#include<stdio.h>
#include<math.h>

void PerfectRange(int,int);
int isPerfect(int);

int main()
{
	int low,upp;

	printf("Enter the lower limit : ");
	scanf("%d",&low);

	printf("Enter the upper limit : ");
	scanf("%d",&upp);

	if(low>upp)
		printf("Invalid limits! \n");

	else
	{
		PerfectRange(low,upp);
		printf("\n");
	}

	return 0;
}

void PerfectRange(int x,int y)
{
	printf("All the Perfect Numbers between %d and %d, are : \n",x,y);

	while(x<=y)
	{
		if(isPerfect(x))		
			printf("%d, ",x);
		
		x++;
	}
}

int isPerfect(int num)
{
	int i,sum;

	sum = 0;
	for(i=1; i<num; i++)
	{
		if(num%i==0)	
			sum += i;
		
	}

	return (num==sum);
}