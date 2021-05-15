#include <stdio.h>  
int main()
{
    int A, B, C;
    printf("Enter the numbers:\n");
    scanf("%d %d %d", &A, &B, &C);
    if (A >= B && A >= C)
    {
        printf("%d is the largest number\n", A);
    }      
    if (B >= A && B >= C)
    {
        printf("%d is the largest number\n", B);    
    }      
    if (C >= A && C >= B)
    {
        printf("%d is the largest number\n", C);
    }
        
}
  
