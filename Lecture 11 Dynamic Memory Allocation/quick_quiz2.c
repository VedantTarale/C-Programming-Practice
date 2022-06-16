/*
Write a program to create an array of size 'n' using calloc where 'n' is an integer entered by the user.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *arr;
    printf("Enter the number of elements required: ");
    scanf("%d",&n);
    arr = (int *)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("The default value of element %d is: %d\n",i+1,arr[i]);
    }
    
    return 0;
}