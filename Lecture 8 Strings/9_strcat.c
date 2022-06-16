#include<stdio.h>
#include<string.h>
int main()
{
    char string[50] = "Hello";
    char *string1 = "There";
    strcat(string,string1);
    printf("Now srting becomes %s",string);
    return 0;
}