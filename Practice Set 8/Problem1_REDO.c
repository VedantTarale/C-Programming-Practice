/*
Write a program to take string as an input from the user using %c and %s. Confirm that the strings are equal.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char string1[50];
    char string2[50];
    char c;
    int i=0;
    printf("Enter your name: ");
    scanf("%s",string1);
    printf("Enter your name again character by character:\n");
    while (c!='\n')
    {
        fflush(stdin);
        scanf("%c",&c);
        string2[i] = c;
        i++;
    }
    string2[i-1] = '\0';
    printf("The value of string1 is: %s\n",string1);
    printf("The value of string2 is: %s\n",string2);
    printf("strcmp for these two strings is: %d\n",strcmp(string1,string2));
    return 0;
}