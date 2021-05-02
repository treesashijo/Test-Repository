#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,radius,rx,ry,distance;
    printf("Enter the center point x,y:\n");
    scanf("%f%f",&x,&y);
    printf("Enter radius of the circle:\n");
    scanf("%f",&radius);
    printf("Enter the point rx,ry to check its position:\n");
    scanf("%f%f",&rx,&ry);
    distance = sqrt( pow( (rx - x), 2) + pow( (ry - y), 2) );
    if(distance<radius)
    {
        printf("Point %0.2f,%0.2f is inside the Circle:\n",rx,ry);
    }
    else if(distance>radius)
    {
        printf("Point %0.2f,%0.2f is outside the Circle:\n",rx,ry);
    }
    else
    {
        printf("Point %0.2f,%0.2f is on the Circle:\n",rx,ry);
    }
}
