#include<stdio.h>
#include<math.h>

int main()

{
	int n,i,j,sum;

	printf("Enter the value of n to print all the Perfect Numbers under it : ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		sum =0;
		for(j=i/2; j>=1; j--)
		{
			if(i%j==0)
			{
				sum += j;
			}
		}
		if(i==sum)
			printf("%d \n",i);
	}

	return 0;
}