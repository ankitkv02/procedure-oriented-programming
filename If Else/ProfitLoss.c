#include<stdio.h>
#include<math.h>

int main()

{
	float bp,sp,amt,P,L;

	printf("Enter the BuyingPrice of the commodity : \n");
	scanf("%f",&bp);

	printf("Enter the SellingPrice of the commodity : \n");
	scanf("%f",&sp);
	
	if (sp > bp)
	{
		amt = sp-bp;
		P = (amt/bp)*100;
		printf("The business yields a Profit of %.1fpercent\n",P);
	}
	else if (sp < bp)
	{
		amt = bp-sp;
		L = (amt/bp)*100;
		printf("The business yields a Loss of %.1fpercent\n",L);
	
	}
	else
	{
		printf("The business stands at Break-Even.\n");
	}
	return 0;
}