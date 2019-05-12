#include<stdio.h>
#include<math.h>
#include<limits.h>
#define MAX_SIZE 1000

int main()

{
	int source[MAX_SIZE],dest[MAX_SIZE],size,i,j;

	printf("Define array size : ");
	scanf("%d",&size);

	if(size > MAX_SIZE)
		printf("Array size exceeded ! ");

	else
	{
		for(i=1; i<=size; i++)
			scanf("%d",&source[i]);

		for(i=1,j=size; i<=size; i++,j--)
			dest[j] = source[i];

		printf("The array with reversed elements is as follows : \n");
		for(i=1; i<=size; i++)
			printf("%d \n",dest[i]);

	}

	return 0;
}