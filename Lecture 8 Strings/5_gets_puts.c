/*
--->gets is a function which can be used to recieve multi-word string
    Multiple gets() calls will be needed for multiple strings.
    Likewise puts can be used to output a string.
    By using puts() the cursor is placed on the next line.
*/
#include<stdio.h>

int main()
{
    char name[34];
    printf("Enter your name: ");
    gets(name);
    printf("Your name is %s\n",name);
    puts(name);
    return 0;
}