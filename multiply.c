#include<stdio.h>
int main()
{
    int fir[10][10],sec[10][10],mul[10][10];
    int c, d, p, q, m, n, k, tot=0;
    printf("The number of rows and columns for first matrix:\n ");
    scanf("%d%d", &m, &n);
    printf("The matrix elements : \n ");
    for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
    {
         scanf("%d", &fir[c][d]);    
    }
    printf("The number of rows and columns for second matrix:\n");
    scanf(" %d%d", &p, &q);
    if (n != p)
    {
        printf("Your given matrices cannot be multiplied\n");
    }
    else
    {
         printf(" Insert your elements for second matrix:\n ");
         for (c = 0; c < p; c++)
         for (d = 0; d < q; d++)
         {
            scanf("%d", &sec[c][d] );
         }
         for (c = 0; c < m; c++)
         {
            for (d = 0; d < q; d++)
            {
                for (k = 0; k < p; k++) 
                {
                    tot = tot + fir[c][k] * sec[k][d];    
                }
                mul[c][d] = tot;
                tot = 0;     
            }
        }
        printf("The result of matrix multiplication or product of the matrices is:\n"); 
        for (c = 0; c < m; c++)
        {
            for (d = 0; d < q; d++)
            printf("%d\t", mul[c][d] );
            printf("\n\n");   
        } 
    }    
}
