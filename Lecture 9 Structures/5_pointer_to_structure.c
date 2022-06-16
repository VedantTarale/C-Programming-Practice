/*
STRUCTURES IN MEMORY
    Structures are stored in momory as contiguous blocks.
    In an array of structures these instances are atored adjacent to each other.

POINTER TO STRUCTURE
    It can be created as follows:
        struct employee e1;
        struct employee *ptr; ---> pointer of the type struct employee
        prt = &e1;
*/
#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salery;
    char name[20];
};

int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1; // pointer ptr stores the address of variable e1;
    (*ptr).code = 100; // value at address stored in ptr = 100;
    // ---------ALTERNATIVELY----------
    ptr->salery=88.55; // arrow operator.
    printf("%d\t",e1.code);
    printf("%.3f",e1.salery);
    return 0;
}