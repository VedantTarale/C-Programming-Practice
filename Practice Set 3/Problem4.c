/*
Write a program to find whether a year entered by the user is a leap year or not. 
Take year as an input from user.
*/
#include<stdio.h>

int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    ((year%4)==0)? printf("The entered year is a LEAP YEAR."):printf("The entered yesr is not a leap year");
    
    return 0;
}