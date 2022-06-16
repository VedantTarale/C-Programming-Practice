#include<stdio.h>
// WRITE A PROGRAM TO PRINT THE MULTIPLICATION TABLE OF INPUT NATURAL NUMBER n.
int main()
{
    int i = 1;
    int input;
    printf("Enter the number whose multiplication table is required:\n");
    scanf("%d",&input);
    while (i<=10)       
    {
        printf("%d times %d is %d\n", i , input , i*input);
        i++;
    }
    
    return 0;
}