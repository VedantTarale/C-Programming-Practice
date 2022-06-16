#include<stdio.h>
// WRITE A PROGRAM TO PRINT THE MULTIPLICATION TABLE OF 10 IN REVERSE ORDER.
int main()
{
    for (int i = 10; i > 0; i--)
    {   
        printf("%d time 10 is %d\n",i,i*10);
    }
    
    return 0;
}