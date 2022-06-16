/*
Write a function slice() to slice a string. It should change the original string in such a way that it is now the sliced string. 
Take m and n as the start and end of the slice of the string.
*/
#include<stdio.h>
#include<string.h>
void slice(char *string, int m, int n){
    char temp[strlen(string)];
    int k = 0;
    for (int i = m+1; i < n+1; i++ )
    {
        temp[k] = string[i];
        k++; 
    }
    strcpy(string,temp);
}
int main()
{
    int m=0,n=0;
    char string[50];
    printf("Enter the string:");
    gets(string);
    //scanf("%s",&string[0]);
    printf("Enter the start of the slice postion:\n");
    scanf("%d",&m);
    printf("Enter the end of the slice postion:\n");
    scanf("%d",&n);
    slice(string,m,n);
    printf("The sliced string is:%s", string);
    return 0;
}