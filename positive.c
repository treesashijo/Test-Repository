#include<stdio.h>
void main()
{
    int num,sum=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    sum=sum+num;
    {
        printf("sum=%d\n",sum);
    }
    if (num>0)
    {
        printf("%d is five digit number\n",num);
    }
    else
    {
        printf("%d is invalid number\n",num);
    }
       
}
