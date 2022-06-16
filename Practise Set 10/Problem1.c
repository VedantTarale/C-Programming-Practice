// Write a program to read three integers from a file;
#include<stdio.h>

int main()
{
    FILE *file; int i;
    file = fopen("Problem1.txt","r");
    fscanf(file,"%d",&i);
    printf("The first integer is %d\n",i);
    fscanf(file,"%d",&i);
    printf("The second integer is %d\n",i);
    fscanf(file,"%d",&i);
    printf("The third integer is %d\n",i);
    fclose(file);
    return 0;
}