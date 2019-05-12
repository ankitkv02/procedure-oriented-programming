#include<stdio.h>
#include<math.h>

void NaturalNumb(int);

int main()

{
	int n,current;
	
	printf("Enter a number to print all the natural numbers under it :");
	scanf("%d",&n);

    printf("All the Natural numbers between 1 and %d are : \n",n);
    NaturalNumb(n);
    printf("\n");
	
	return 0;
}

void NaturalNumb(int num)
{ 
	if(num>=1)
	{
		NaturalNumb(num-1);
		printf("%d, ",num);	    	    	
	}
}