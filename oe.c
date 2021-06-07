#include<stdio.h>
int main()
{
	int a[] = {1,2,3,4,5,6},i,tmp;
	for (i = 0; i <= 5; i = i + 2)
	{
		tmp = a[i];
		a[i] = a[i + 1];
		a[i + 1] = tmp;
	}
	for (i = 0; i <= 5; i++)
	{
		printf("%d\n", a[i]);
	}
	
}
