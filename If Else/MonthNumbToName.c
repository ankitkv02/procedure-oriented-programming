#include <stdio.h>

int main()
{
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    if(month==4 || month==6 || month==9 || month==11)
    {
        printf("30 days\n");
    }
    else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        printf("31 days\n");
    }
    
    else if(month==2)
    {
        printf("28 or 29 days\n");
    }
    else
    {
        printf("Invalid input! Please enter month number between (1-12).\n");
    }

    return 0;
}