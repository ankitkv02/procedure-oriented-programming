#include<stdio.h>
#include<math.h>

int Reverse(int);

int main()
{
	int num,s;

	printf("Enter a number : ");
	scanf("%d",&num);

	s = Reverse(num);

	printf("Reverse of %d is : %d \n",num,s);

	return 0;
}

int Reverse(int a)
{
	int digits = (int)log10(a);
	
	if(a/10==0)
		return a;
			
	return a%10 * pow(10,digits) + Reverse(a/10);
}