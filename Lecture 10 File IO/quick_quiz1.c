/*Modify program 2 to check whether the file exits or not before opening the file.*/
#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("vedant.txt","r");
    if (ptr == 0){
        printf("File doesn't exist");
    }
    else
    {
        printf("File exists");
    }
    
    return 0;
}