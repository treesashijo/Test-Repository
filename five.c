#include<stdio.h>
void main()
{
    int a,l,rev=0;
    printf("Enter the number\n");
    scanf("%d",&a);
    while (a>0)
    {
      l=a%10;
      rev=rev%10+l;
      a=a%10;
      {   
          printf("rev=%d\n",rev);
      }
    }
    if(a>0)
    {
        printf("%d is five digit number\n",a);
    } 
    else
    {
        printf("%d is invalid number\n",a);
    }   
}
