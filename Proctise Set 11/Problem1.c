/*
Write a program to dynamically create an array of size 6 capable of storing 6 integers.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    arr = (int *)malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of element %d is: %d\n",i+1,arr[i]);
    }
    
    
    return 0;
}