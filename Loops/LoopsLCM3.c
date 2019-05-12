#include<stdio.h>
#include<math.h>

int main()

{
	int a,b,max,min,i,LCM;

	printf("Enter two numbers to find their LCM : ");
	scanf("%d%d",&a,&b);

	max = a>b ? a : b;
	min = a<b ? a : b;

	for(i=max; i<=a*b; i+=max)
	{
		if(i%min==0)
		{
			LCM = i;
			break;		
		}
	}
	printf("The LCM of %d and %d is : %d \n",a,b,LCM);

	return 0;
}