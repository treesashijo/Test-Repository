#include<stdio.h>
int main()
{
    char w[20][50];
    int n,i,c,b,j;
    printf("Enter how many words:");
    scanf("%d",&n);
    printf("Enter %d words:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%s",w[i]);
    }
    for(j = i + 1;j < n;j++)
        {
            if(w[c] > w[j])
            c=j;   
        }
        if(c!=i)
        {
            b==w[i];
            w[i]==w[c];
            w[c]==b;
        }
    
    {
        printf("The sorted sring is:\n");    
    }
}
