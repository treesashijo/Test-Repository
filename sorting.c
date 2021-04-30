#include<stdio.h>
int main()
{
    int n,a[100],c,b,i,j;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n);
    for(i = 0;i < n;i++)
    scanf("%d",&a[i]);
    for(i = 0;i < n;i++)
    {
        c=i;
        for(j = i + 1;j < n;j++)
        {
            if(a[c] > a[j])
            c=j;   
        }
        if(c!=i)
        {
            b=a[i];
            a[i]=a[c];
            a[c]=b;
        }
    }
    printf("Sorted Array:");
    for(i = 0;i < n;i++)
    printf("%dn",a[i]);
    printf("\n");    
}
