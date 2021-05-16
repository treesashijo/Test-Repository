#include<stdio.h>
int main()
{
    int a,b,big;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    big=(a>b)?a:b;
    printf("Biggest number is %d\n",big);
}
