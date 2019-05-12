#include<stdio.h>
#include<math.h>

int main()

{
	int num,reverse,digits,rev;
	
	printf("Enter a number to print it in words : ");
	scanf("%d",&num);

	reverse = 0;
	while(num != 0)
	{
		digits = (int)log10(num);
		reverse = reverse + ((num%10) * pow(10,digits));
		num /= 10;
	}

	while(reverse != 0)
	{
		rev = reverse%10;
		switch(rev)
		{
			case(0):
			printf(" Zero");
			break;

			case(1):
			printf(" One");
			break;

			case(2):
			printf(" Two");
			break;

			case(3):
			printf(" Three");
			break;

			case(4):
			printf(" Four");
			break;

			case(5):
			printf(" Five");
			break;

			case(6):
			printf(" Six");
			break;

			case(7):
			printf(" Seven");
			break;

			case(8):
			printf(" Eight");
			break;

			case(9):
			printf(" Nine");
			break;

		}
	//	reverse = (reverse - rev)/10;
		reverse /= 10;
	}
	printf("\n");	
	
	return 0;
}