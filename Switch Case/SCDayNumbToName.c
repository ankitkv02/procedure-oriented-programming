#include<stdio.h>
#include<math.h>

int main()

{
	int DayNumb;

	printf("Enter the Day Number (1-7) : ");
	scanf("%d",&DayNumb);

	switch(DayNumb)
	{
		case 1 :
			printf("It's Monday! \n");
			break;

		case 2 :
			printf("It's Tuesday! \n");
			break;

		case 3 :
			printf("It's Wednesday! \n");
			break;

		case 4 :
			printf("It's Thursday! \n");
			break;

		case 5 :
			printf("Thank god, it's Friday! \n");
			break;
		
		case 6 :
			printf("Thank god, it's Saturday! \n");
			break;

		case 7 :
			printf("Thank god, it's Sunday! \n");
			break;

		default :
			printf("The number entered must be between 1-7 ! \n");

	}
	
	return 0;
}