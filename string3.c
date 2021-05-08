#include<stdio.h>
int main()
{
    char a[10];
    int length=0,i,j;
    printf("Enter the word:");
    scanf("%s",a);
    for(i=0; a[i]!='\0';i++)
    {
        length++;
    }
    for(i=0;j=length-1;i>j;i++,j--)
    {
        if(a[i]!=a[j])
        {
            break;
        }
    }
    if(i>j)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}
