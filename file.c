#include<stdio.h>
int main()
{
    FILE *f;
    char c,filename[50];
    printf("Enter the filename: ");
    scanf("%s",filename);
    f=fopen(filename,"w");
    printf("Enter the contents:\n");
    do
    {
        scanf("%c",&c);
        putc(c,f);
    }while(c != EOF);
    fclose(f);
}
