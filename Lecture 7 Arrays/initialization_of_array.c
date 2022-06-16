#include<stdio.h>

int main()
{
    int array[3] = {25,50,75};
    for (int i = 0; i < 3; i++)
    {
        printf("The value of element number %d is: %d\n",i,array[i]);
    }
    
    return 0;
}