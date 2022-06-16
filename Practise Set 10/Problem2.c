/*
Write a program to generate a multiplication table of a given number in a text file.
Make sure that the file is readable and well formatted. 
*/
#include<stdio.h>

int main()
{   
    int num = 5;
    FILE *file;
    file = fopen("Problem2.txt","w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(file,"%d times %d is %d\n",num,i+1,num*(i+1));
    }
    
    return 0;
}