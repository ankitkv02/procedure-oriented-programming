#include<stdio.h>
#include<math.h>

int main()

{
	int n,i,lastDig,digits,temp,sum;

	printf("Enter the value of n to print all the armstrong numbers under it : ");
	scanf("%d",&n);

	printf("All the armstrong numbers between 1 and %d, are : \n",n);
	for(i=1; i<=n; i++)
	{
		digits = (int)log10(i) + 1;
		temp = i;
		sum = 0;
		while(temp>0)
		{
			lastDig = temp%10;
			sum += pow(lastDig,digits);
			temp /= 10;
		}
		if(i == sum)
			printf("%d \n",i);
		
	}

	return 0;
}