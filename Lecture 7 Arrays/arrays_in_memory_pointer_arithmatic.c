/*
Consider the array
    int a[3] = {7,9,11};
        Each integer element has a memoty size of 4 bytes.
        Howeveer the memory size depends on the system archetecture.
    So, this array will reserve 12 bytes of memory.

    NOTE:   The addresses of 2 successive elements of an array OF INTEGER TYPE differ by 4.
            The addresses of 2 successive elements of an array OF FLOAT TYPE differ by 4.
            The addresses of 2 successive elements of an array OF CHAR TYPE differ by 1.
*/

/*
POINTER ARITHMATIC:
    A pointer can be incremented to point to the next memory location of that type.
        For INTEGER a single increment is equivalent to increase by 4 in pointer value
        For FLOAT a single increment is equivalent to increase by 4 in pointer value
        For CHAR a single increment is equivalent to increase by 1 in pointer value
*/

/*
Following operations can be performed on pointers:
    1)Addition of a number to a pointer.
    2)Subtraction of a number from a pointer.
    3)Subtraction of a pointer from another
    4)comparision of two pointer variables.
*/
#include<stdio.h>

int main()
{
    int a = 47;
    int *ptr = &a;
    printf("The value of address stored in ptr of INTEGER type is %u\n",ptr);
    ptr++;
    printf("The value of address stored in ptr of INTEGER type after increment is %u\n",ptr);
    
    
    float b = 47;
    float *ptr1 = &b;
    printf("The value of address stored in ptr1 of FLOAT type is %u\n",ptr1);
    ptr1++;
    printf("The value of address stored in ptr1 of FLOAT type after increment is %u\n",ptr1);
    
    
    char c = 't';
    char *ptr2 = &c;
    printf("The value of address stored in ptr2 of CHAR type is %u\n",ptr2);
    ptr2++;
    printf("The value of address stored in ptr2 of CHAR type after increment is %u\n",ptr2);
    
    
    return 0;


}