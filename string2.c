#include<stdio.h>
int main()
{
    char a[10];
    int n,i;
    printf("What is your name?:");
    scanf("%s",a);
    printf("Welcome\t");
    printf("%s",a);
    printf("\nThird letter is %c",a[2]);
    printf("\n");
}
