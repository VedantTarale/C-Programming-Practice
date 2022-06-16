/*
Repeat problem 2 with a general input from the user.
*/
#include<stdio.h>

int main()
{
    int array[10];
    for(int i = 0; i<10;i++){
        printf("Enter the entry number %d: ",i+1);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of element %d is %d\n",i+1,array[i]);
    }
    
    return 0;
}