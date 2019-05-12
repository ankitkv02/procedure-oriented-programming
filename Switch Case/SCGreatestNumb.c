#include<stdio.h>
#include<math.h>

int main()

{
	int a,b,c;

	printf("Enter first number A : ");
	scanf("%d",&a);

	printf("Enter second number B : ");
	scanf("%d",&b);

	if (a>b)
		c = 0;
	else
		c = 1;
    
	switch(c)
	{
		case 0 :
		printf("%d is greater than %d \n",a,b);
		break;

		case 1 :
		printf("%d is greater than %d \n",b,a);
		break;
	}
	
	return 0;
}