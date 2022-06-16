// WRITE A PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS PRIME OR NOT.
#include <stdio.h>
// THIS IS NOT THE MOST EFFICIENT METHOD TO SOLVE THE PROBLEM. THIS IS A QUESTION OF DATA STRUCTURES AND ALGORITHMS.
int main()
{
    int input;
    printf("Enter the number to be checked:\n");
    scanf("%d", &input);
    int i = input - 1;
    int remainder;
    int check = 0;
    while (i > 1)
    {
        remainder = input % i;
        i--;
        if (remainder == 0)
        {
            check = 1;
            break;
        }
    }
    if (check)
    {
        printf("The number is composite.\n\n");
    }
    else
    {
        printf("The number is prime.\n\n");
    }
    //-------------------------------------------------------------------------
    int input_1;
    printf("Enter the number to be checked:\n");
    scanf("%d", &input_1);
    int remainder_1;
    int check_1 = 0;
    for (int i_1 = input_1 - 1; i_1 > 2; i_1--)
    {
        remainder_1 = input_1 % i_1;
        if (remainder_1 == 0)
        {
            check_1 = 1;
            break;
        }
    }
    if (check_1)
    {
        printf("The number is composite.\n\n");
    }
    else
    {
        printf("The number is prime.\n\n");
    }
    //--------------------------------------------------------------------------
    
    int input_2;
    printf("Enter the number to be checked:\n");
    scanf("%d", &input_2);
    int i_2 = input_2 - 1;
    int remainder_2;
    int check_2 = 0;
    do
    {
        remainder_2 = input_2%i_2;
        i_2--;
        if (remainder_2==0)
        {
            check_2 = 1;
            break;
        }
        
    } while (i_2>1);
    
    if (check_2)
    {
        printf("The number is composite.\n\n");
    }
    else
    {
        printf("The number is prime.\n\n");
    }
    //-------------------------------------------------------------------------
    return 0;
}