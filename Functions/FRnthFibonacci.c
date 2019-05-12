#include<stdio.h>
#include<math.h>

int Fab(int);

int main()
{
	int n,i;

	printf("Enter the nth term of the Fabinacci which you want printed : ");
	scanf("%d",&n);

	printf("%dth term of Fabinacci is : %d \n",n,Fab(n));

/*	for(i=1; i<=n; i++)     // For printing all terms upto 'n'
		printf("%d terms of Fabinacci are : %d \n",i,Fab(i));  */

	return 0;
}

int Fab(int t)
{
	return (t==1 || t==2) ? 1 : Fab(t-1)+Fab(t-2);
}