/*
Try problem 3 using call by value and verify that it dosen't change the value of the said variable 
*/
#include<stdio.h>
int change (int a); 
int main()
{
     int input;
    printf("Enter the number to be multiplied by 10: ");
    scanf("%d",&input);
    printf("The value of the number multiplied by 10 is %d\n", change(input));
    printf("The value of i after the multiplication is: %d\n",input);
    return 0;
}
int change (int a){
    return a*10;
}