#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);


    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is an alphabet.\n", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is a digit.\n", ch);
    }
    else 
    {
        printf("'%c' is a special character.\n", ch);
    }

    return 0;
}