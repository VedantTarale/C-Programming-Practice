/*
Find Greatest of the four numbers entered by the user.
*/
#include<stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf("Please Enter the First number:\n");
    scanf("%d",&num1);
    printf("Please Enter the Second number:\n");
    scanf("%d",&num2);
    printf("Please Enter the Third number:\n");
    scanf("%d",&num3);
    printf("Please Enter the Fourth number:\n");
    scanf("%d",&num4);
    if (num1>=num2 && num1>=num3 && num1>=num4)
    {
        printf("The greatest number is %d",num1);
    }
    else if (num2>=num1 && num2>=num3 && num2>=num4)
    {
        printf("The greatest number is %d",num2);
    }
    else if (num3>=num2 && num3>=num1 && num3>=num4)
    {
        printf("The greatest number is %d",num3);
    }
    else{
        printf("The greatest number is %d",num4);
    }
    
    return 0;
}