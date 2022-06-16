/*
Write a program having a variable i. Print the address of i. Pass the avriable to a function and print its address. Are these addresses same? Why?
        => The addresses are no the same. This is because the copy of the variable i passes onto the function aquires a new address while the original one is retained by variable 'i'.
*/
#include<stdio.h>
int print(int a);
int main()
{
    int i = 5;
    printf("The address of the variable 'i' is %d\n",&i);
    print(i);
    return 0;
}
int print(int a){
    printf("The address of the variable 'i' is %u\n", &a);   
}