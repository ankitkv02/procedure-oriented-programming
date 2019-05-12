#include<stdio.h>
#include<math.h>

int main ()

{
	int Num,EvOdd;

	printf("Enter a number to check whether it's Even or Odd : ");
	scanf("%d",&Num);

	if (Num%2==0)
		EvOdd = 0;
	else
		EvOdd = 1;

	switch (EvOdd)
	{
		case 0 :
		printf("%d is an Even number! \n",Num);
		break;

		case 1 :
		printf("%d is an Odd number! \n",Num);

	}

	return 0;
}