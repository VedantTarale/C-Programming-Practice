/*
Write a program to decrypt the string in the provious program.
*/
#include<stdio.h>
void decrypt(char string[]){
    int i =0;
    char c = string[0];
    while (c !='\0')
    {
        string[i] = string[i] - 1;
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
    decrypt(string);
    printf("The decrypted string is: %s",string);
    return 0;
}