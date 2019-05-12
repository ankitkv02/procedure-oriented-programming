#include<stdio.h>
#include<math.h>

int main()

{
	int num1,num2,max,min,i,LCM=1;

	printf("Enter two numbers to find their LCM : ");
	scanf("%d%d",&num1,&num2);

	max = num1>num2 ? num1 : num2;
	min = num1<num2 ? num1 : num2;

	i = max;

	while(i<=num1*num2)
	{
		if(i%min==0)
		{
			LCM = i;
			break;
		}
		i += max;
	}
	printf("The LCM of %d and %d is : %d \n",num1,num2,LCM);	

	return 0;
}