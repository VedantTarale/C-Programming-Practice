/*
Write a program to read a txt file character by character and write its content witce in a separate file.
*/
#include<stdio.h>

int main()
{
    FILE *file1, *file2;
    file1 = fopen("Problem3_1.txt","r"); 
    file2 = fopen("Problem3_2.txt","w"); 
    char c = fgetc(file1);
    while (c!=EOF)
    {
        fputc(c,file2);
        c = fgetc(file1);
    }
    fclose(file1);
    file1 = fopen("Problem3_1.txt","r"); 
    fprintf(file2,"\n");
    char d = fgetc(file1);
        while (d!=EOF)
    {
        fputc(d,file2);
        d = fgetc(file1);
    }
    return 0;
}