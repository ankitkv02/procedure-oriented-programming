#include<stdio.h>

int main()

{
	int sub[5],i;
	float t,avg,per;

	printf("Enter subjects marks : \n");
	for (i=1;i<=5;i++) {
		printf("Subject #%d : ",i);
		scanf("%d",&sub[i]);
	}
	
	for (i=1;i<=5;i++) {
		t=t+sub[i];
	}
	printf("\nTotal : %f\n",t);	
	avg=t/5;
	printf("\nAverage : %f\n",avg);	
	per=(t*100)/500;
	printf("\nPercentage : %f\n",per);	
	
	return 1;
}