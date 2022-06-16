#include<stdio.h>

int main()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    if (a==1)
    {
        printf("Your number is 1\n");
    }
    else if (a==2)
    {
        printf("Your number is 2\n");
    }
    else if (a==3)
    {
        printf("Your number is 3\n");
    }
    else
    {
        printf("The number entered is not 1,2 or 3");
    }
    
    return 0;
}