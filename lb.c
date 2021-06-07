#include<stdio.h>
int main()
{
    float l,b;
    printf("Enter the length and breath:\n");
    scanf("%f%f",&l,&b);
    greetCustomer();
    findArea(l,b);
    findPerimeter(l,b);
}
void greetCustomer()
{
    printf("Welcome to cs Super 20\n");
}
void findArea(float l,float b)
{
    float a;
    a = l*b;
    printf("Area = %f\n",a);
}
void findPerimeter(float l, float b)
{
    float p;
    p = 2*(l+b);
    printf("Perimeter = %f\n",p);
}
