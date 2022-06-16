/*
Write your own version of strlen.
*/
#include<stdio.h>

int main()
{
    char string[50];
    int i = 0;
    printf("Enter the string:");
    gets(string);
    while (string[i] != '\0')
    {
        i++;
    }
    printf("The number of characters in the string including spaces is: %d",i);
    return 0;
}