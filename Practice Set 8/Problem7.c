/*
Write a program to count the occurance of a given character in a string.
*/
#include<stdio.h>
int count(char string[50],char trig){
    int i = 0; int count = 0;
    char c = string[0];
    while (c != '\0')
    {
        if (c==trig){
            count++;
            i++;
        }
        else{
            i++;
        }
        c = string[i];
    }
    return count;
}
int main()
{
    char string[50];
    char trig;
    printf("Ente the string:");
    gets(string);
    printf("Ente the character to be searched:");
    scanf("%c",&trig);
    printf("The number of (%c) in the entered string is: %d",trig,count(string,trig));
    return 0;
}