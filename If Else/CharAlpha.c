#include <stdio.h>

int main()
{
    char ch;
    
    printf("Enter any character: ");
    scanf("%c", &ch);
    

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Character is an ALPHABET.\n");
    }
    else
    {
        printf("Character is NOT an ALPHABET.\n");
    }

    return 0;
}
