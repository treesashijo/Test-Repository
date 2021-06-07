#include <stdio.h>
int main()
{
    int i, num;
    printf("Enter number to print table:\n");
    scanf("%d", &num);
    for(i=1; i<=20; i++)
    {
        printf("%d * %d = %d\n", num, i, (num*i));
    }

}
