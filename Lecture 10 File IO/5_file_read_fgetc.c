#include<stdio.h>

int main()
{
    FILE *file;
    file = fopen("fgetcdemo.txt","r");
    char c = fgetc(file);
    while (c!=EOF)          // fgetc returns EOF(End Of File) when all the characters are read and the chars reach end.
    {
        printf( "%c",c);
        c=fgetc(file);
    }
    
    return 0;
}