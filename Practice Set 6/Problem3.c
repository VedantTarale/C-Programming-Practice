/*
Write a program to change the value of a vriable to 10 times its current value. Write a function and pass the value by reference.
*/
#include<stdio.h>
int change (int *a); 
int main()
{
    int input;
    printf("Enter the number to be multiplied by 10: ");
    scanf("%d",&input);
    printf("The value of the number multiplied by 10 is %d", change(&input));
    return 0;
}
int change (int *a){
    int temp = (*a) *10;
    return temp; 
}