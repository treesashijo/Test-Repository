#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    printf("Enter a word:");
    scanf("%s",a);
    strcpy(b,a);
    printf("%s\n%s",a,b);
}
