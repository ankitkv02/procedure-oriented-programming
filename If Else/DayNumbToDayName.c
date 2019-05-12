#include <stdio.h>

int main()
{
    const char * WEEKS[] = { "Monday", "Tuesday", "Wednesday", 
                            "Thursday", "Friday", "Saturday", 
                            "Sunday"};
    int i;

    printf("Enter week number (1-7): \n");
    scanf("%d", &i);
	
    if(i > 0 && i < 8)
    {
        printf("%s\n", WEEKS[i-1]);
    }
    else
    {
        printf("Invalid input! Please enter week number between 1-7.\n");
    }

    return 0;
}