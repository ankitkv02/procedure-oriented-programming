#include<stdio.h>
#include<math.h>

int main()

{
	int n,i,j,temp,fact,sum,lastDig;

	printf("Enter the value of n to print all the Strong Numbers under it : ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		temp = i;
		sum = 0;
		while(temp>0)
		{
			lastDig = temp%10;	
			fact = 1;
			for(j=lastDig; j>=1; j--)
			{
				fact *= j;
			}
			sum += fact;
			temp /= 10;
		}
		if(sum == i)
			printf("%d \n",i);
	}	

	return 0;
}