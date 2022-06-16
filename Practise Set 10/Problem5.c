/*
Write a program to modify a file containing an integer to double ots value.
*/
#include<stdio.h>

int main()
{
    FILE *file;
    int i;
    file = fopen("Problem5.txt","r");
    fscanf(file,"%d",&i);
    i = i*2;
    fclose(file);
    file = fopen("Problem5.txt","w");
    fprintf(file,"%d",i);
    return 0;
}