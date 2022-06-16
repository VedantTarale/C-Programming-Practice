/*
ARRAYS:
    Array is a collection of SIMILAR elements.
        It is a variable which can store only one value.
    NOTE: Array index starts with ZERO.


    ACCESSING ELEMENTS:
        Elements of an array can be accessed using
            scanf("%d",&array[0]); ----------> input of first value
            printf("%d",array[0]); ----------> output of first value
        

*/
#include<stdio.h>

int main()
{
    int marks[4];
    marks[0] = 55;
    marks[1] = 73;
    marks[2] = 49;
    marks[3] = 85;
    for (int i = 0; i < 4; i++)
    {
        printf("The element of number %d in the array is %d\n",i,marks[i]);
    }
    
    return 0;
}