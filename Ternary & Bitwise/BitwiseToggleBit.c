#include<stdio.h>
#include<math.h>

int main()

{
	int num,bitN,newNum;

	printf("Enter a number : ");
	scanf("%d",&num);

	printf("Enter nth bit to toggle : ");
	scanf("%d",&bitN);

	newNum = num ^ (1 << bitN);

	printf("Bit toggled successfully!\n\n");
    printf("Number before toggling %d bit: %d (in decimal)\n",bitN,num);
    printf("Number after toggling %d bit: %d (in decimal)\n",bitN,newNum);

	return 0;
}