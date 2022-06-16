/*
Write a program to print the value of variable i by using "pointer to pointer" type vatiable 
*/
#include<stdio.h>
int main(){ 
    int i = 55;
    int *a; int **b;
    a = &i;
    b = &a;
    printf("The value of the variable i is: %d", *(*(b)));
    return 0;
}