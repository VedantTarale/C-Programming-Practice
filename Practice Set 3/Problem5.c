/*
Write a program to determin whether an netered character is lowercase or uppercase.
*/
#include<stdio.h>

int main()
{
    char character;
    printf("Please enter the character:\n");
    scanf("%c",&character);
    if(character>=97 && character<=122){
        printf("You have entered a lowercase alphabet");
    }
    else if (character>=65 && character<=90)
    {
        printf("You have entered an UPPERCASE alphabet");
    }
    else
    {
        printf("INVALID");
    }
    
    
    return 0;
}