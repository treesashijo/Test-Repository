#include<stdio.h>

double cubeRoot(double n)
  { 
    double i, precision = 0.000001;
    for(i =1; (i*i*i) <= n; ++i);
    for(--i; (i*i*i) < n; i += precision);
    return i;
  }
   

int main()
  {
    int n = 125;
    printf("Cube root of %d = %If\n",n,cubeRoot(n));
    return 0;
  }
    if (n<0)
    {
        printf("%d is a perfect cube\n:",n);
    }
    else
    {
        printf("%d is not a perfect cube\n:",n);
    }   

