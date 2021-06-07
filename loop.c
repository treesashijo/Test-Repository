#include<stdio.h>
int main()
{
	int j;
	float i,fact, sum=0, ser;
	for(i=1;i<=7;i++)
	{
		fact=i;
		for(j=1;j<i;j++)
	    fact=fact*j;
		ser=i/fact;
		sum=sum+ser;
	}
	printf("%f is the sum of the series\n", sum);
}
