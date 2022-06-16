/*
Calculate income tax paid by an employee to the government as per the stats.
*/
#include<stdio.h>

int main()
{
    float income;
    printf("Please enter your income(in Rupees per annum):\n");
    scanf("%f",&income);
    if (income>=250000 && income<500000)
    {
        printf("The income tax paid is: %f Rupees", (income-250000)*0.05);
    }
    if (income>=500000 && income<1000000)
    {
        printf("The income tax paid is: %f Rupees", (income-500000)*0.20);
    }
    if (income>=1000000)
    {
        printf("The income tax paid is: %f Rupees", (income-1000000)*0.30);
    }
    
    return 0;
}