#include<stdio.h>
#include<math.h>

int main()

{
	int num,i,sumSmall=0,sumBig=0;

	printf("Enter a number to check if it's a perfect number : ");
	scanf("%d",&num);

	for(i=1; i<num; i++)
		if(num%i==0)
			sumSmall += i;

/*	for(i=1; i<=num; i++)			// 6 = 1,2,3 >> [1+2+3 = 6]
		if(num%i==0)				// 6 = 1,2,3,6 >> [(1+2+3+6)/2 = 6]
			sumBig += i;	

	if(sumBig/2 == num)
		printf("Congratulations! %d is found to be a Perfect Number! \n",num);	*/
	
	if(sumSmall == num)
		printf("Congratulations! %d is found to be a Perfect Number! \n",num);

	else
		printf("%d ain't a Perfect Number. \n",num);		

	return 0;
}