#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int a,b;
    a=10;
    b=20;
    swap(&a,&b);//Call By REFERENCE
    printf("In main, a=%d b=%d\n",a,b);
}
void swap(int *a,int *b);
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("In swap, a=%d b=%d\n",*a,*b);
}

