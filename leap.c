#include<stdio.h>
int main()
{
    int y;
    printf("Enter any year:\n");
    scanf("%d",&y);
    if(y%4==0 && y%100!=0)
    {
        printf("Leap year\n");
    }
    else if(y%400==0)
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Common year\n");
    }
}
