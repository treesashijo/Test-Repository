#include<stdio.h>
int main()
{
    int marks,salary=5000;
    printf("Enter the marks:\n");
    scanf("%d",&marks);
    (marks>80)?(salary+=1000):(salary-=100);
    printf("Salary:%d\n",salary);
}
