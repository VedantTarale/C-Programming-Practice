/*
write a program to create a dynamic array of 5 floats using malloc()
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *arr;
    arr = (float *)malloc(5*sizeof(float)); // creating the dynamic array and typecasting the void return into float.
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element: ",i+1);
        scanf("%f",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of element %d is: %.2f\n",i+1,arr[i]);
    } 
    return 0;
}