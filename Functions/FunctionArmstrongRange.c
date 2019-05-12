#include<stdio.h>
#include<math.h>

void ArmstrongRange(int,int);
int isArmstrong(int);

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
		ArmstrongRange(low,upp);
		printf("\n");
	}

	return 0;
}

void ArmstrongRange(int l,int u)
{
	printf("All the armstrong numbers between %d and %d are : \n",l,u);

	while(l<=u)
	{
		if(isArmstrong(l))
			printf("%d, ",l);

		l++;
	}
}

int isArmstrong(int num)
{
	int digits,temp,sum=0;

	digits = (int)log10(num) + 1;

	temp = num;
	while(temp>0)
	{
		sum += pow(temp%10,digits);
		temp /= 10;
	}

	return (num==sum);

}