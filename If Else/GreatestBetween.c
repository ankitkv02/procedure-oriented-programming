
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    if(num1 > num2)
    {
        printf("%d is maximum", num1);        
    }

    //if(num2 > num1)
    else if(num2 > num1)
    {
        printf("%d is maximum", num2);
    }
    else
    {
        printf("\nNumbers are equal : %d", num2);
    }

    return 0;

}    
