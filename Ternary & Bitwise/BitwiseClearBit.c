#include<stdio.h>
#include<math.h>

int main()

{
	int num,bitN,newNum;

	printf("Enter a number : ");
	scanf("%d",&num);

	printf("Enter nth bit to clear : ");
	scanf("%d",&bitN);

	newNum = num & (~(1 << bitN));

	printf("Bit cleared successfully!\n\n");
    printf("Number before clearing %d bit: %d (in decimal)\n",bitN,num);
    printf("Number after clearing %d bit: %d (in decimal)\n",bitN,newNum);

	return 0;
}