#include<stdio.h>
void main()
{
    int choice;
    float a,b,r;
    printf("Calculator");
    printf("\n..........");
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
    printf("\n.................");
    printf("\n\nEnter your choice:");
    scanf("%d",&choice);
    if(choice>0 && choice <5)
    {
        printf("Enter the numbers:");
        scanf("%f%f",&a,&b);
    }
    switch(choice)
    {
        case 1:
            r=a+b;
            printf("%f + %f = %f",a,b,r);
            break;
        case 2:
            r=a-b;
            printf("%f - %f = %f",a,b,r);
            break;
        case 3:
            r=a*b;
            printf("%f * %f = %f",a,b,r);
            break;
        case 4:
            r=a/b;
            printf("%f / %f = %f",a,b,r);
            break;
        default:
            printf("Invalid choice");
    }
    printf("\n\n");
}
