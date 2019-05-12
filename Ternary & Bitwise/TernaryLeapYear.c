#include<stdio.h>
#include<math.h>

int main()

{
	int year;

	printf("Enter a year to find out if it's a leap year : ");
	scanf("%d",&year);

	(year%4==0 && year%100!=0) ? printf("LeapYear!\n") : (year%400==0) ? printf("LeapYear!\n") : printf("Not a LeapYear.\n");

	return 0;
}