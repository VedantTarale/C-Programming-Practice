//WRITE A PROGRAM USING FUNCTIONS TO FIND THE AVERAGE OF THREE NUMBERS.
#include<stdio.h>
float average(float a, float b, float c);
int main()
{
    float a,b,c;
    printf("Enter the first number:\n");
    scanf("%f",&a);
    printf("Enter the second number:\n");
    scanf("%f",&b);
    printf("Enter the third number:\n");
    scanf("%f",&c);
    printf("The average of the three numbers is %f", average(a,b,c));
    return 0;
}
float average(float a, float b, float c){
    float avg = (a + b +c)/3;
    return avg;
}
