#include<stdio.h>
#include<math.h>

int main()

{
	float p,ch,b,m,c,per;

	printf("Enter the marks of Physics : \n");
	scanf("%f",&p);

	printf("Enter the marks of Chemistry : \n");
	scanf("%f",&ch);
	
	printf("Enter the marks of Biology : \n");
	scanf("%f",&b);
	
	printf("Enter the marks of Mathematics : \n");
	scanf("%f",&m);

	printf("Enter the marks of Computers : \n");
	scanf("%f",&c);

	per = ((p+ch+b+m+c)/500)*100;

	printf("The percentage obtained by the student is : %.2f percent \n",per);

	if (per > 90)
	{
		printf("Grade A\n");
	}
	if (per > 80)
	{
		printf("Grade B\n");
	}
	if (per > 70)
	{
		printf("Grade C\n");
	}
	if (per > 60)
	{
		printf("Grade D\n");
	}
	if (per > 40)
	{
		printf("Grade E\n");
	}
	else 
	{
		printf("Grade F\n");
	}

	return 0;
}