#include<stdio.h>
#include<math.h>

int main()

{
	float UnitCons,Billing;
	printf("Enter the Electricity Consumption(in units) : ");
	scanf("%f",&UnitCons);

	if (UnitCons >= 1 && UnitCons <= 50)
	{
		Billing = UnitCons * 0.50;
		printf("Total Bill (inclusive of 20percent surcharge) : %.2f \n",(120*Billing)/100);
	}
	else if (UnitCons >= 50 && UnitCons <=150 )
	{
		Billing = UnitCons * 0.75;
		printf("Total Bill (inclusive of 20percent surcharge) : %.2f \n",(120*Billing)/100);
	}
	else if (UnitCons >= 150 && UnitCons <= 250)
	{
		Billing = UnitCons * 1.20;
		printf("Total Bill (inclusive of 20percent surcharge) : %.2f \n",(120*Billing)/100);
	}
	else if (UnitCons >= 250)
	{
		Billing = UnitCons * 1.50;
		printf("Total Bill (inclusive of 20percent surcharge) : %.2f \n",(120*Billing)/100);
	}

	return 0;

}