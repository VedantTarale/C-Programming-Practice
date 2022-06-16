#include <stdio.h>

int main()
{
    /*
    Q1] Which of the following are valid?
        i) int a; b=a; -------------INVALID
        ii) int v = 3^3; -----------VALID
        iii) char dt = '20 november 2021'; -----------INVALID

    Q2] What data type will 3.0/8 - 2 return?
        -----Float.

    Q3] Write a program to check whether a number is divisible by 97 or not. 
    */
int a;
printf("Enter the number: \n");
scanf("%d", &a);
printf("The remainder is: %d", a % 97);
    return 0;    
}