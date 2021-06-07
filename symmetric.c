#include<stdio.h>
int main()
{
    int c, d, a[10][10], b[10][10], n, temp;
    printf("Enter the dimension of the matrix:\n");
    scanf("%d", &n);
    printf("Enter the %d elements of the matrix:\n",n*n);
    for(c = 0; c < n; c++) 
    for(d = 0; d < n; d++)
    {
        scanf("%d", &a[c][d]);
    } 
    for(c = 0; c < n; c++) 
    for(d = 0; d < n; d++)
    {
        b[d][c] = a[c][d];
    }
    printf("The original matrix is: \n"); 
    for(c = 0; c < n; c++)
    {
        for(d = 0; d < n; d++) 
        {
            printf("%d\t", a[c][d]);
        }
        printf("\n\n");
    }
    printf("The Transpose matrix is:\n");
    for(c = 0; c < n; c++) 
    {
        for(d = 0; d < n; d++)
        {
            printf("%d\t", b[c][d]);
        }
        printf("\n\n");
    }
    for(c = 0; c < n; c++)  
    {
        for(d = 0; d < n; d++)  
        {
           
            if(a[c][d] != b[c][d]) 
            {
                printf("Matrix is not Symmetric\n");
                
            }
        }
    }
    printf("Matrix is Symmetric\n");
      
}
