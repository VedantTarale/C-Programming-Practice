#include<stdio.h>
// WRITE A PROGRAM TO SUM THE FIRST 10 NATURAL NUMBERS.
int main()
{
    // int i = 1;
    // int sum;
    // sum=10*11/2;
    // printf("%d",sum);

    int sum=0;
    for (int i = 1; i <= 10; i++)
    {
        sum+=i;
    }
    printf("The sum is %d using for loop\n\n",sum);
    

    // -------------------------------------------> THE ABOVE IS USING FOR LOOP

    int a = 1, sum_1=0;
    while(a<=10){
        sum_1+=a;
        a++;
    }
    printf("The sum is %d using while loop\n\n",sum_1);

    // -------------------------------------------> THE ABOVE PROGRAM IS USING WHILE LOOP

    int b=1,sum_2=0;
    do
    {
        sum_2+=b;
        b++;
    } while (b<=10);
    printf("The sum is %d using do-while loop\n\n", sum_2);

    // ------------------------------------------> THE ABOVE PROGRAM IS USING DO-WHILE LOOP
    return 0;
}