#include<stdio.h>  
int main()  
{  
    int limit, num, positive = 0, negative = 0, zero = 0;  
    printf("Enter the limit\n");  
    scanf("%d", &limit);  
    printf("Enter %d numbers\n", limit);  
    while(limit!=0)  
    {  
        scanf("%d", &num);  
        if(num > 0)  
        {  
            positive++;  
        }  
        else if(num < 0)  
        {  
            negative++;  
        }  
        else  
        {  
            zero++;  
        }  
        limit--;  
    }  
    printf("Positive Numbers: %d\n", positive);  
    printf("Negative Numbers: %d\n", negative);  
    printf("Number of zero: %d\n", zero);  
      
}  

