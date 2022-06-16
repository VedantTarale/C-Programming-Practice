/*
Write a program that reverses the array passed to it
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void reverse(int ptr[], int size){
    int temp;
    for (int i = 0; i < 5; i++)
    {
        temp = ptr[9-i];
        ptr[9-i] = ptr[i];
        ptr[i] = temp;
    }   
}
int main()
{
    int array[10] = {10,20,30,40,50,60,70,80,90,100};
    printf("The original sequence is:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",array[i]);
    }
    reverse(array,10);
    printf("The revresed sequence is:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}