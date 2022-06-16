/*
Types of function calls:
    Based on the way we call functions, function calls are of two types:
        1) Call by value ------> Sending the values of the arguements
        2) Call by refrence ---> Sending the address of the arguements

1] CALL BY VALUE
    Here the value of the arguements are passed to the function
    Example:
    int c = sum(x,y);
    if sum is defined as sum(int a, int b), then the values 3 and 4 are aopied to a and b. Now even if we change a and b, nothing happens to the 
    variables x and y.

USUALLY IN C PROGRAMMING WE MAKE A CALL BY VALUE
*/
#include<stdio.h>
int sum(int a, int b);
int main()
{
    int x = 4; int y = 7;
    printf("The value of x and y before the sum are %d and %d\n", x,y);
    printf("The value sum of x and y is %d\n", sum(x,y));
    printf("The value of x and y after the sum are %d and %d\n", x,y);

    return 0;
}
int sum(int a, int b){
    int c = a + b;
    a = 5050;
    b = 9080;
    return c;
}
