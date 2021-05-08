#include<stdio.h>
int main()
{
    char a[10];
    printf("Enter the word:");
    scanf("%s",a);
    if(strcmp(strrev(a),a)==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    printf("\n\n");
}
