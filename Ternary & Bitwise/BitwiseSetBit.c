#include<stdio.h>
#include<math.h>

int main()

{
	int num,bitN,newNum;

	printf("Enter a number : ");
	scanf("%d",&num);

	printf("Enter nth bit to set : ");
	scanf("%d",&bitN);

	newNum = (1 << bitN) | num;

	printf("Bit set successfully!\n\n");
    printf("Number before setting %d bit: %d (in decimal)\n",bitN,num);
    printf("Number after setting %d bit: %d (in decimal)\n",bitN,newNum);

	return 0;
}