/*
CALL BY REFERENCE:
    Here the address of the variable is passed to the function as arguements.
    Now since the address of the variable is passed to the function, we can no modify the value of the vriable inside the function using * and & 
    commands.
*/
#include<stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main()
{
    int x = 3, y = 7;
    printf("The original value of x is %d and that of y is %d\n", x,y);
    wrong_swap(x,y);    // DOES NOT EORK DUE TO CALL BY VALUE
    printf("The value of x and y after wrong_swap is %d and %d respectively\n", x,y);
    swap(&x,&y);        // WORKS DUE TO CALL BY REFERENCE.
    printf("The value of x and y after swap is %d and %d respectively\n", x,y);  
    return 0;
}
void wrong_swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}