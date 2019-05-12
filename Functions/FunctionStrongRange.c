#include<stdio.h>
#include<math.h>

void StrongRange(int,int);
int isStrong(int);
long fact(int);

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
		StrongRange(low,upp);
		printf("\n");	
	}	

	return 0;
}

void StrongRange(int x,int y)
{	
	printf("All the Strong numbers between %d and %d, are : \n",x,y);

	while(x<=y)
	{
		if(isStrong(x))	
			printf("%d, ",x);
		
		x++;
	}
}

int isStrong(int a)
{
	int temp,sum;

	temp = a;
	sum = 0;
	while(temp>0)
	{
		sum += fact(temp%10);
		temp /= 10;
	}
	
	return (a==sum);
}

long fact(int l)
{
	if(l==0)
		return 1;

	else
		return (l*fact(l-1));
			
}