/*
Write a program which calculate the sum and average of average of two numbers. Use pointer and print the values of sum and average in main()
*/
#include<stdio.h>
int sum(int *a, int *b);
float average(int *a, int *b);
int main()
{
    int input1, input2;
    printf("Enter the first number: ");
    scanf("%d",&input1);
    printf("Enter the second number: ");
    scanf("%d",&input2);
    printf("The sum of the numbers is %d\n", sum(&input1, &input2));
    printf("The average of the numbers is %f\n", average(&input1, &input2));
    return 0;
}
int sum(int *a, int *b){
    int sum = *a + *b;
    return sum;
}
float average(int *a, int *b){
    float average = (*a + *b)/2;
    return average;
}
