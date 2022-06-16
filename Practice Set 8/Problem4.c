/*
Write your own version of strcpy.
*/
#include<stdio.h>
void strcopy(char newstring[], char string[]){
    char c = string[0];
    int i = 0;
    while (c!='\0')
    {
      newstring[i] = string [i];
      //printf("%c\n",newstring[i]);  
      i++;
      c = string[i];
    }
    newstring[i] = '\0';
}
int main()
{
    char string[50];
    char newstring[50];
    printf("Enter the string:");
    gets(string);
    strcopy(newstring,string);
    printf("%s",newstring);
    return 0;
}