#include <stdio.h> 
int main( int argc, char *argv [] )
{
    printf("Name of my Program %s \t \n", argv[0]);
    if( argc == 2 )
    {
        printf("Value given by user is: %s \t \n", argv[1]);
    }
    else if( argc > 2 )
    {
        printf("Many values given by users.\n");
    }
    else
    {
        printf("Single value expected.\n");
    }
}
