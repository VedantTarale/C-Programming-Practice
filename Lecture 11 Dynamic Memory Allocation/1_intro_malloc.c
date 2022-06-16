/*
Whenever a program is run in C, its gets allocated memory in stack.
Additional memory can be requested from "heap" which is the dynamic memory.
Stack is destroyed as soon as the program is terminated.
The memory of heap is shared by all the dynamic liblaries and programs.
*/


/*
C is a longuage with some fixed rules of programming. For example: canging the size 
of an array is not allowed.

DYNAMIC MEMORY ALLOCATION:
    Dynamic Memory allocation is a way to allocate memory to a data structure during
    the runtime. We can use DMA functions available in C to allocate and free memory 
    during runtime.
*/

/*
    malloc() function:
        malloc stands for memory allocation. It takes the number of bytes to be allocated as an input and returns a pointer of type void.
        SYNTAX:
            ptr = (int*)malloc(30*sizeof(int));
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int)); // sizeof(int) -- returns the integer number of bytes that an integer requires in a given architecture.
    //The (int *) typecasts the void return of malloc() into an integer.
    //This stores space for 6 integers
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element: ",i+1);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %d\n",i+1,ptr[i]);
    }
    return 0;
}