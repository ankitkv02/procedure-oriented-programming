#include<stdio.h>
#include<math.h>
#define SIZE 8

int main()

{
	char binary[SIZE + 1], onesComp[SIZE + 1];
	int i,error=0;

	printf("Enter an %d bit binary number : ",SIZE);
	gets(binary);  //------>said to be a dengerous function!

	for(i=0; i<SIZE; i++)
	{
		if(binary[i]=='1')
			onesComp[i] = '0';

		else if(binary[i]=='0')
			onesComp[i] = '1';

		else
		{
			printf("Invalid input! ");
			error = 1;
			break;
		}
	}

	onesComp[SIZE] = '\0';

	if(error == 0)
	{
		printf("Binary input : %s \n",binary);
		printf("One's Complement : %s \n",onesComp);

	}

	return 0;
}