#include <stdio.h>

int main()
{
    //BODMAS doesn't apply in C programming.
    /*
    Following is the operator precedence
    1] * / %
    2] + -
    3] =
    Higher priority operators are evluated first in absence of paranthesis 
    */
    int x = 2;
    int y = 3;
    printf("The value of 3*x - 8*y is %d\n", 3 * x - 8 * y);
    /*
    operator associativity
    ---  (*) (/) follow left to right associtivity
    x*y/z => (x*y)/z
    x/y*z => (x/y)*z
    */
   printf("The value of 8*y / 3*x is %d", (((8*y)/3))*x);
    return 0;
}