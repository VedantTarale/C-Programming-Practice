/*
Write a program to check whether a given character is present in a string or not.
*/
#include<stdio.h>
int check(char string[50],char trig){
    int i = 0;
    char c = string[i];
    int val = 0;
    while (c != '\0')
    {
        if(c==trig){
            val = 1;
            break;
        }
        i++;
        c = string[i];
    }
    if(c == '\0' && val == 0){
        return 0;
    }
    else if (val == 1){
            return 1;
    }
}
int main()
{
    char string[50]; char trig;
    printf("Enter the string: ");
    gets(string);
    printf("Enter the character to be checked: ");
    scanf("%c",&trig);
    int result = check(string,trig);
    if (result == 1){
        printf("The entered character is present in the entered string");
    }
    else if (result == 0){
        printf("The entered character is not present in the entered string");
    }

    return 0;
}