#include<stdio.h>
#include<math.h>
#include<limits.h>
#define MAX_SIZE 100

int main()

{
	int master[MAX_SIZE],ev[MAX_SIZE],odd[MAX_SIZE],i,j=1,k=1,size,EvOdd;

	printf("Define the array size : ");
	scanf("%d",&size);

	if(size>MAX_SIZE)
		printf("Array size exceeded ! ");

	else
	{
		for(i=1; i<=size; i++)	
		{
			scanf("%d",&master[i]);
					
			EvOdd = (master[i]%2==0);

			switch(EvOdd)
			{
				case 1:
					ev[j] = master[i];
					j++;
					break;

				case 0:
					odd[k] = master[i];
					k++;
					break;

			}

		}
		printf("All the even elements ever inserted are : \n");
		for(i=1; i<j; i++)
			printf("%d \n",ev[i]);

		printf("All the odd elements ever inserted are : \n");
		for(i=1; i<k; i++)
			printf("%d \n",odd[i]);

 	}

	return 0;
}