#include<stdio.h>
#include<math.h>

int main()

{
	char ch;

	printf("Enter a character to check if it's an alphabet : ");
	scanf("%c",&ch);

	((ch >= 'a' && ch<= 'z') || (ch >= 'A' && ch <= 'Z')) ? printf("'%c' is an alphabet!\n",ch) : printf("'%c' is NOT an alphabet!\n",ch);

	return 0;
}