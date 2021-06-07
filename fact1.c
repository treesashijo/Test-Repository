#include<stdio.h>
int findFact(int);
void main()
{
    int n,fact;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("No Factorial");
    }
    else
    {
        fact=findFact(n);
        printf("%d!=%d\n",n,fact);
    }
}
int findFact(int n)
{
    return (n==0) ? 1 : n*findFact(n-1);
}
