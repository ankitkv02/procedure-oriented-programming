#include<stdio.h>
#include<math.h>

int HCF(int,int);

int main()
{
	int a,b;

	printf("Enter two numbers to find their HCF : ");
	scanf("%d%d",&a,&b);

	printf("The HCF of %d and %d is : %d \n",a,b,HCF(a,b)); 

	return 0;
}

int HCF(int x,int y)
{
	return y==0 ? x : HCF(y,x%y);      //Euclidean Algo.
}

/*
int HCF(int x, int y)
{
    while (x!=y)
    {
        if (x>y)
            return HCF(x-y,y);         //Second method.
        
        else
            return HCF(x,y-x);
        
    }
    return x;
} */