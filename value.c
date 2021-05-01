#include<stdio.h>
int main()
{
    float n;
    printf("Enter the number:\n");
    scanf("%f",&n);
    if(n<0.0) n=-n;
    printf("Absolute value = %f\n",n);
}
