#include<stdio.h>
int findFact(int);
void main()
{
    int n,fact;
    printf("Enter the number:");
    scanf("%d",&n);
    fact=findFact(n);
    printf("%d!=%d\n",n,fact);
}
int findFact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*findFact(n-1);
    }
}
