//WRITE A PROGRAM TO CALCULATE THE SUM OF THE NUMBERS OCCURING IN THE MULTIPLICATION TABLE OF 8 (UPTO 80)
#include<stdio.h>

int main()
{   
    int product =0, sum=0;
    for (int i = 1; i <= 10; i++)
    {
        product=8*i;
        sum+=product;
    }
    printf("The required sum is %d", sum);
    
    return 0;
}