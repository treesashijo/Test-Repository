#include<stdio.h>
int main()
{
	int a[10], b[10], i, j;
	printf("Enter 10 Elements:\n");
	for (i = 0; i<10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0, j = 9; i<10; i++, j--)
	{
		b[i] = a[j];
	}
	printf("Array after Copying in Reverse Order:");
	for (i = 0; i<10; i++)
	{
		printf("%d\n", b[i]);
	}

}	
