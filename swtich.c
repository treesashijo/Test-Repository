#include<stdio.h>
void main()
{
    clrscr();
    int clss, nos_fail, grace;
    printf("Enter class obtained by student and number of subjects he failed in ");
    scanf("%d%d",&clss,&nos_fail);
    switch(clss)
    {
        case 1:
            switch(nos_fail)
            {
                case 1:
                case 2:
                case 3:
                    grace=5;
                    break;

                default:
                    grace=0;
                    break;
            }
            break;

        case 2:
            switch(nos_fail)
            {
                case 1:
                case 2:
                    grace=4;
                    break;

                default:
                    grace=0;
                    break;
            }
            break;

        case 3:
            switch(nos_fail)
            {
                case 1:
                    grace=5;
                    break;

                default:
                    grace=0;
                    break;
            }
            break;
    }
    printf("\nStudent will get %d grace marks per subject",grace);
    getch();
}
