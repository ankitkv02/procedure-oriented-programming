#include<stdio.h>
#include<math.h>

int main()

{
	int i,start,end,sum=0;

	printf("Enter lower limit : ");
	scanf("%d",&start);

	printf("Enter upper limit : ");
	scanf("%d",&end);

	if(start%2!=0)
		start++;
	
	for(i=start; i<=end; i+=2)
	{
		sum += i;
	}
	printf("The sum of all even numbers between %d and %d is %d \n",start,end,sum);

	return 0;
}