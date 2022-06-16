/*Write a program to represent a complex number*/
#include<stdio.h>
typedef struct complexnumber
{
    int real;
    int imaginary;
}compno;

int main()
{
    compno n1;
    n1.real = 5;
    n1.imaginary = 7;
    printf("The complex number is: %d + %di",n1.real,n1.imaginary);
    return 0;
}