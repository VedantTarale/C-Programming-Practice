#include<stdio.h>
/*
DO-WHILE LOOP IS A WHILE LOOP WHICH EXECUTES AT LEAST ONCE.
---> WHILE: CHECKES CONDITION AND THEN EXECUTES THE CODE
---> DO-WHILE: RUNS THE CODE ONCE AND THEN CHECKES THE CONDITION.
*/
int main()
{
    int i = 5;
    do{
        printf("The value of i is:%d\n",i);
        i++;
    }while(i<=20);
    return 0;
}