#include<stdio.h>
void toh(int,char,char,char);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("\n*******************************************************************************************\n");
    toh(n,'A','C','B');
    printf("\n*******************************************************************************************\n");   
}
void toh(int n,char from, char to, char aux)
{
    if(n==1)
    {
        printf("\nMove disc 1 from %c to %c",from,to);
    }
    else
    {
        toh(n-1),from,aux,to;
        printf("\nMove disc %d from %c to %c",n,from,to);
        toh(n-1,aux,to,from);
    }
}
