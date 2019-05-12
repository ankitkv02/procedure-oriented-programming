#include<stdio.h>
#include<math.h>

int main ()

{
	float BaseSal,GrossSal;

	printf("Please enter your salary : ");
	scanf("%f",&BaseSal);

	if (BaseSal >= 10000 && BaseSal <=20000)
	{
		GrossSal = (200*BaseSal)/100;
		printf("Gross Salary : %.2f \n",GrossSal);
	}
	else if (BaseSal >= 20000 && BaseSal <= 30000)
	{
		GrossSal = (215*BaseSal)/100;
		printf("Gross Salary : %.2f \n",GrossSal);
	}
	else if (BaseSal >= 30000)
	{
		GrossSal = (225*BaseSal)/100;
		printf("Gross Salary : %.2f \n",GrossSal);
	}

	return 0;
}