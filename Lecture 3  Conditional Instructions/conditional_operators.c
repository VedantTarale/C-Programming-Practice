#include<stdio.h>

int main()
{
    /*
    Operator Precedence:
    i] !
    ii] * / %
    iii] + -
    iv] < > <= >=
    v] == !=
    vi] &&
    vii] || 
    viii] =
    */

    /*
    CONDITIONAL OPERATORS: SHORT-HAND IF ELSE STATEMENTS;
    SYNTAX: CONDITION ? EXPRESSION IF-TRUE : EXPRESSION IF-FALSE
    (?) AND (:) ARE TERNARY OR CONDITIONAL OPERATORS. 
    */

    int a;
    printf("Enter the value:");
    scanf("%d",&a);
    (a<5) ? printf("The entered number is less than 5") : printf("The entered number is not less than 5"); 
    return 0;
}