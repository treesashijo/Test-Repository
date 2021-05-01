#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter the point x,y:\n");
    scanf("%f%f",&x,&y);
    if(x==0 && y==0)
    {
        printf("Point lies on the origin:\n");
    }
    else if(x==0)
    {
        printf("Point lies on the x-axis:\n");
    }
    else if(y==0)
    {
        printf("Point lies on the y-axis:\n");
    }
}
