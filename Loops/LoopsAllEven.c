#include<stdio.h>
#include<math.h>

int main()

{
	int i;

	i=1;

	while (i<=100)
	{
		if (i%2==0)
		{
			printf("%d, ",i);
		}
		i++;
	}
	printf("\n");
	
	return 0;
}