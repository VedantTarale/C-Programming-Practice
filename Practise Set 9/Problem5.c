/*Create an array of 5 complex numbers created in previous program and display them with the help of a display function. The values must be taken as an input from the user.*/
#include<stdio.h>
typedef struct complexnumber
{
    int real;
    int imaginary;
}compno;
void display(compno num[5]){
    for (int i = 0; i < 5; i++)
    {
        printf("Complex Number %d is %d + %di\n",i+1, num[i].real,num[i].imaginary);
    }
}
int main()
{
    compno number[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part of complex number %d: ",i+1);
        scanf("%d",&number[i].real);
        printf("Enter the imaginary part of complex number %d: ",i+1);
        scanf("%d",&number[i].imaginary);
    }
    display(number);
    
    
    
    return 0;
}