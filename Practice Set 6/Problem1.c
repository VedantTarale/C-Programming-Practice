/*
WRITE A PROGRAM TO GET THE ADDRESS OF A VARIABLE. USE THIS ADDRESS TO GET THE VALUE OF THE VARIABLE
*/
#include<stdio.h>

int main()
{
    int a;
    int *A;
    printf("Enter the value of a:");
    scanf("%d",&a);
    A = &a;
    printf("The address of the variable a is %u\n",A);
    printf("The value of the variabl a is %u\n",*A);
    return 0;
}