/*
    calloc() function:
        calloc function stands for continuous allocation.
        It initialises each memory block with a default value of 0.

    SYNTAX:
        ptr = (int *)calloc(30,sizeof(int));
    NOTE: If space is ninsufficient the nmemory allocation fails and the calloc function returns NULL pointer.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    arr = (int *)calloc(6,sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("The deault value of element %d is: %d\n",i+1,arr[i]);
    }
    
    return 0;
}