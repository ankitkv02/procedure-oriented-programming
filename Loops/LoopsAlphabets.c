#include<stdio.h>
#include<math.h>

int main()

{	
	char ch;

	ch = 'a';
	while (ch<='z')
	{
		printf("%c, ",ch);
		ch++;
	}

	return 0;
}