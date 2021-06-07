#include<stdio.h>
void main()
{
    int class,l,grace,falied;
    printf("Enter class obtained by student and number of subjects he failed in:\n");
    scanf("%d%d",&class,&l);
    switch(class)
    {
        case 1:
            falied >3;
            grace=5;
            break;
        case 2:
            falied >2;
            grace=4;
            break;
        case 3:
            falied >1;
            grace=5;
            break;

        default:
            printf("You entered wrong class for the stduent\n");
            grace=0;
                    
    }
    printf("Student will get %d grace marks per subject\n",grace);
}
