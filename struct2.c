#include<stdio.h>
int main()
{
    struct student
    {
        int rollon;
        int age;
        int marks;
    };
    struct student s;
    printf("Size: %ld\n\n",sizeof(s));
}
