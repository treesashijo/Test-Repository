#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three angles of triangle:\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b+c)==180)
    {
        printf("Triangle is valid:\n");
    }
    else
    {
        printf("Triangle is invalid:\n");
    }
}
