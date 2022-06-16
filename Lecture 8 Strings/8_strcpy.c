#include<stdio.h>
#include<string.h>
// The strcpy() function is used to copy a given string into a second string.
int main()
{
    char *string = "Hello";
    char string1[32];
    strcpy(string1,string);
    printf("The value stored in string1 is %s",string1);
    return 0;
}