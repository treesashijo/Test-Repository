#include<stdio.h>
int main()
{
	int arr[25], a, i, count = 0;
	for (i = 0; i<25; i++)
	{
		printf("Enter numbers:");
		scanf("%d", &arr[i]);
	}
	printf("Enter the number you want to search:\n");
	scanf("%d", &a);
	for (i = 0; i<25; i++)
	{
		if (arr[i] == a)
			count++;
	}
	if (count!=0)
    {
        printf("%d is present in the data %d times\n", a, count);
    }
	else
    {
        printf("%d is not present in the data\n", a);
    }
		
	
}
