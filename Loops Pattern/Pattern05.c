#include<stdio.h>
#include<math.h>

int main()

{
	int i,j;
	 for (i=1; i<=5; i++)
	 {
	 	for (j=1; j<=5; j++)
	 	{
	 		if(i%2==0)
	 		{
	 			if(j%2==0)
	 				printf("1");
	 			else
	 				printf("0");
	 		}
	         else
	 		{
	 			if(j%2==0)
	 				printf("0");
	 			else
	 				printf("1");
	 		}
	 	}
	 	printf("\n");
	 }
}