#include<stdio.h>
int main()
{
    int n,a[30],c,b,i,j;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i = 0;i < n;i++)
    scanf("%d",&a[i]);
    for(i = 0;i < n;i++)
    {
        for(j = i + 1;j < n;j++)
        {
            if(a[c]<a[j])
            {
              b=a[i];
              a[i]=a[c];
              a[c]=b;
            }    
        }
    }
    printf("The numbers arranged in descending order are give below:\n");
    for(i = 0;i < n;i++)
    {
        printf("%d\n",a[i]);
    }
    
}
