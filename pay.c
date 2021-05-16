#include<stdio.h>
int main()
{
    int count = 1, workinghours, overtime;
    float overtimepay;
    while(count<=10)
    {
        printf("Enter the working hours of employee no %d: ", count);
        scanf("%d", &workinghours);
        if(workinghours>40)
        {
            overtime = workinghours - 40;
            overtimepay = overtime * 12.00;
            printf("Employee No %d overtime pay is %.2f\n", count, overtimepay);
        }
        else
        {
            printf("You have to work for more than 40 hours to get over time pay\n");

        }    
        count++;
    }
}
