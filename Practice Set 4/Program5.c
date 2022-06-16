// WRITE A PROGRAM TO CALCULATE THE FACTORIAL OF A GIVEN NUMBER USING A FOR LOOP
#include<stdio.h>

int main()
{
    int input,factorial=1;
    printf("Enter the number whose factorial is required:\n");
    scanf("%d",&input);
    for (int i = input ; i > 0 ; i--)   
    {
        factorial*=i;
    }
    printf("The factorial of %d is %d using FOR LOOP\n", input,factorial);
    // ----------------------------------> The abouve code is using for loop

    int input_1,factorial_1=1;
    printf("\nEnter the number whose factorial is required:\n");
    scanf("%d",&input_1);
    while (input_1>0)
    {
        factorial_1*=input_1;
        input_1--;
    }
    printf("The factorial of %d is %d using WHILE LOOP\n", input_1,factorial_1);
        
    return 0;
}