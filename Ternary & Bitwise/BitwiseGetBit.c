#include<stdio.h>
#include<math.h>

int main()

{
	int num,bitN,bitStatus;

	printf("Enter a number : ");
	scanf("%d",&num);

	printf("Enter nth bit to check(0-31) : ");
	scanf("%d",&bitN);

	bitStatus = (num >> bitN) & 1;

	printf("Bitstatus of %d bit of the number %d, is %d. \n",bitN,num,bitStatus);

	return 0;
}