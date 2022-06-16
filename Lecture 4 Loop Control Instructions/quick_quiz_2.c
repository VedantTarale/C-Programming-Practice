#include<stdio.h>
// WRITE A PROGRAM TO PRINT FIRST N NATURAL NUMBERS USING DO-WHILE LOOP.
int main()
{
    int input;
    printf("Please enter the number:\n");
    scanf("%d",&input);
    int i = 1;
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=input);
    
    return 0;
}