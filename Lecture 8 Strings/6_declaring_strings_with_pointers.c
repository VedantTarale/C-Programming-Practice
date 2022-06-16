/*
NOTE:
    1) Once a string is defined using char string[] = "Vedant"; , it cannot be re-initialized to someting else.
    2) A string defined by pointers can be re-initialised.
*/
#include<stdio.h>

int main()
{
    char *ptr = "Vedant";
    // This tells the compiler to store the staing in memory and assigned address is stored a cahr pointer.
    char name[] = "Shrimay";
    ptr = "VedantTarale";
    name = "ShrimayTarale"; // Cannot be edited
    puts(ptr);
    puts(name);
    return 0;
}