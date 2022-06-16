#include <stdio.h>
// WRITE A PROGRAM TO CALCULATE NATURAL NUMBERS FROM 10 TO 20 WHEN INITIAL LOOP COUNTER IS SET TO 0.
int main()
{
    // int i = 0;
    // while (i <= 10)
    // {
    //     printf("%d\n", i + 10);
    //     i++;
    // }
    //THE ABOVE CODE IS NOT EFFICIENT

    int i = 0;
    while(i<=20){
        if(i>=10){
            printf("The value is %d\n", i);
        }
    i++;
    }
    return 0;
}