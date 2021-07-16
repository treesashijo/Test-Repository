#include<stdio.h>
int fib(int)
int main()
{
    int n,i;
    printf("Enter how many fibonacci numbers:");
    scanf("%d",&n);
    for(i=0;i<n;i++);
    {
        printf("%d\t",fib(i));
    }
}
int fib(int i)
{
    return (i==1) || i==0 ? 1 : fib(i-1)+fid(i-2);
}

