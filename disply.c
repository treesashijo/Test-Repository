#include<stdio.h>
void main()
{
    int a,b,i;
    printf("Enter the number\n:");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<=10)
    {
        printf("Enter the %d numbers\n:",a);
        for(i=0;i<a;i++)
        {
            scanf("%d",&a);
        }
    if(b<=10)
    {
        printf("Enter the %d numbers\n:",b);
        for(i=0;i<b;i++)
        {
            scanf("%d",&b);
        }
    }
}
    
   


