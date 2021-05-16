#include <stdio.h>
int main()
{
  int i,num,factorial = 1;
  printf("Please Enter any number to Find Factorial:\n");
  scanf("%d", &num);
  for (i = 1; i <= num; i++)
   {
     factorial = factorial * i;
   } 
   printf("\nFactorial of %d = %d\n", num, factorial);
 
}
