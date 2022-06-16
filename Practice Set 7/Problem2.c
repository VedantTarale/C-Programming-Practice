/*
Write a program to create an array of 10 elements and store the multiplication table of 5 in it.
*/
#include<stdio.h>

int main()
{
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        array[i] = 5*(i+1);
    }
    printf("The elements of the array are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",array[i]);
    }   
    return 0;
}