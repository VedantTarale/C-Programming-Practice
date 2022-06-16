/*
Write a program with a function which counts the number of poitive integers in an array.
*/
#include<stdio.h>
int count(int arr[],int size){
    int counter = 0;
    for (int i = 0; i < size; i++)
    {   if (arr[i]>0)
        {
            counter++;
        }    
    }
    return counter;
}
int main()
{
    int array[6] = {-8,54,986,-88,75,-44};
    printf("The nember of positive integers in the array are: %d",count(array,6));
    return 0;
}