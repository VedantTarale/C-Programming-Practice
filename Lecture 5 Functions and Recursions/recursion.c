/*
A FUNCTION WHICH CAN CALL ITSELF IN C PROGRAMMING IS CALLED A RECURSION OR A RECURSIVE FUNCTION.

EXAMPLE OF RECURSION IS FACTORIAL.

factorial(n) = 1 X 2 X 3 ....... X n-1 X n
factorial(n) = (1 X 2 X 3 ....... X n-1) X n
factorial(n) = factorial(n-1) X n

since we can write factorial of a number in terms of itself we can program it using a recursion.
*/

#include<stdio.h>
int factorial(int x);
int a = 5;
int main()
{
    printf("The value of %d factorial is %d\n", a, factorial(a));
    return 0;
}
int factorial(int x){
    printf("Calling factorial %d\n", x);
    if(x==1 || x==0){
        return 1;
    }
    else
    {
        return x * factorial(x-1);
    }
    
}