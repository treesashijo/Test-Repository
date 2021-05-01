#include<stdio.h>
int main()
{
    int n,m,c,d,a[10][10],b[10][10],s[10][10],di[10][10];
    printf("Enter the number of rows and columns of the first matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the %d elements of the first matrix:\n",m*n);
    for(c=0;c<m;c++)
    for(d=0;d<n;d++)
    scanf("%d",&a[c][d]);
    printf("Enter the %d elements of the second matrix:\n",m*n);
    for(c=0;c<m;c++)
    for(d=0;d<n;d++)
    scanf("%d",&b[c][d]);
    printf("The first matrix is:\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            printf("%d\t",a[c][d]);
        }
    printf("\n");
    }
    printf("The second matrix is:\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<m;d++)
        {
            printf("%d\t",b[c][d]);
        }
    printf("\n");
    }
    for(c=0;c<m;c++)
    for(d=0;d<n;d++)
    di[c][d]=a[c][d]-b[c][d];
    printf("The difference of the two entered matrices is:\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            printf("%d\t",di[c][d]);
        }
        printf("\n");
    }
    printf("\n\n\t\tHave a good day !\n\n\t\t"); 
    
}
