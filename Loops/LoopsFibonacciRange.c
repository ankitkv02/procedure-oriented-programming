#include<stdio.h>
#include<math.h>

int main()

{
	int start,end,a,b,c;

	printf("Enter the start term : ");
	scanf("%d",&start);

	printf("Enter the end term : ");
	scanf("%d",&end);

	a = 0;
	b = 1;
	c = 0;
	while(c<=end)
	{
		if(c>=start)
		{
			printf("%d, ",c);
		}

		a = b;
		b = c;
		c = a + b;
	}
	printf("\n");

	return 0;
}