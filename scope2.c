#include<stdio.h>
void sampleFun();
int x=10;       //GLOBAL
int main()
{
    printf("x=%d\n",x);
    x++;
    sampleFun();
}
void sampleFun()
{
    printf("x=%d\n",x);
}
