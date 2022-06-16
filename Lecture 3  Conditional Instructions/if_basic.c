#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the number: \n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("The Entered number is even");
    }
    else //ELSE block is optional.
    {
        printf("The Entered number is odd");
    }

     return 0;
}