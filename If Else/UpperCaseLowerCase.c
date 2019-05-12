#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);


    if(ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is uppercase alphabet.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is lowercase alphabet.\n", ch);
    }
    else
    {
        printf("Enter an alphabet.\n");
    }
    
    return 0;
}