#include<stdio.h>
int main()
{
    int n,i=3, count, c;
    scanf("%d", &n);
    if(n >= 1)
    {
        printf("Enter first %d prime numbers are:\n",n);
        printf("2 ");
    }
    for(count = 2; count <= n; i++)
    {
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }
        if(c == i)
        {
            printf("%d",i);
            
        }
    }
    printf("Good night...\n");
}
