/*
Write a program to encrypt a string by adding 1 to its ascii value;
*/

#include<stdio.h>
void encrypt(char string[]){
    int i =0;
    char c = string[0];
    while (c !='\0')
    {
        string[i] = string[i] + 1;
        //printf("%c\n",string[i]);
        i++;
        c = string[i];
    }
    
}
int main()
{
    char string[50];
    printf("Ente the string:");
    gets(string);
    encrypt(string);
    printf("The encrypted string is: %s",string);
    return 0;
}