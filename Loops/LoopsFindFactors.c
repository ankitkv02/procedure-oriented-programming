#include<stdio.h>
#include<math.h>

int main()

{
	int num,i;

	printf("Enter a number to find all its factors : ");
	scanf("%d",&num);

	printf("All the factors of %d are : \n",num);
	for(i=1; i<=num; i++)
	{	
		if(num%i == 0)		
			printf("%d \n",i);

	}

	return 0;
}