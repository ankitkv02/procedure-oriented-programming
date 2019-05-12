#include<stdio.h>
#include<math.h>

int main()

{
	char ch;
	printf("Enter the Alphabet : ");
	scanf("%c",&ch);

	switch(ch)
	{
			case 'a' :
				printf("%c is a Vowel. \n",ch);
				break;

			case 'e':
				printf("%c is a Vowel. \n",ch);
				break;

			case 'i' :
				printf("%c is a Vowel. \n",ch);
				break;

			case 'o':
				printf("%c is a Vowel. \n",ch);
				break;

			case 'u' :
				printf("%c is a Vowel. \n",ch);
				break;

			case 'A':
				printf("%c is a Vowel. \n",ch);
				break;

			case 'E' :
				printf("%c is a Vowel. \n",ch);
				break;

			case 'I':
				printf("%c is a Vowel. \n",ch);
				break;

			case 'O' :
				printf("%c is a Vowel. \n",ch);
				break;

			case 'U':
				printf("%c is a Vowel. \n",ch);
				break;
				
			default :
				printf("%c is a Consonant. \n",ch);					
	}

	return 0;
}