#include<stdio.h>
int main()
{
    float l,w,a,p;
    printf("Enter length of the Rectangle:\n");
    scanf("%f",&l);
    printf("Enter width of the Rectangle:\n");
    scanf("%f",&w);
    a = l*w;
    p = 2 * (l+w);
    if(a>p)
    {
        printf("yes, area(%0.2f) is greater than its perimeter(%0.2f):\n",a,p);
    }
    
}
