#include<stdio.h>

int main()

{
	int TotalDays,Years,Months,Weeks,Days;

	printf("Enter the value of TotalDays : ");
	scanf("%d",&TotalDays);

	Years = TotalDays/365;
	Days = TotalDays%365;
	Months = Days/30;
	Days = Days%30;
	Weeks = Days/7;
	Days = Days%7; 

	printf("Years = %d \n Months = %d \n Weeks = %d \n Days = %d \n", Years,Months,Weeks,Days);

	return 0;
}