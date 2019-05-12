#include <stdio.h>  
  
int main()  
{  
    int side1,side2,side3,valid = 0;

    
    printf("Enter all the three sides of the triangle: \n");  
    scanf("%d%d%d", &side1, &side2, &side3);  
      
    if((side1 + side2) > side3)  
    {  
        if((side2 + side3) > side1)  
        {  
            if((side1 + side3) > side2)
            {  
              
                valid = 1;
           
            }  
        }
    }  
    
    else if(valid == 1)
    {
        printf("Triangle is valid. \n");
    }
    else
    {
        printf("Triangle is not valid. \n");
    }
  
    return 0;  
}