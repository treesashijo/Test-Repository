#include<stdio.h>
struct time
{
    int hour;
    int min;
    int sec;
};
void displayTime(struct time t);
int main()
{
    struct time t;
    printf("Enter your birth time:");
    scanf("%d%d%d",&t.hour,&t.min,&t.sec);
    displayTime(t);
    printf("\n");    
}


void displayTime(struct time t)
{
    printf("Your birth time is %d:%d:%d\n",t.hour,t.min,t.sec);
}
