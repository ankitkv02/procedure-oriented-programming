#include<stdio.h>
#include<math.h>

int main()

{
	int a,b,L;

	printf("Enter two numbers to find their LCM : ");
	scanf("%d%d",&a,&b);

	for(L=a>b?a:b; L<=a*b; L+=(a>b?a:b))
		if(L%a==0 && L%b==0)
			break;

	printf("The LCM of %d and %d is : %d \n",a,b,L);

	return 0;
}