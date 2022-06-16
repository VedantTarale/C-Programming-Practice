/*
The break statement is used to exit the loop irrespective of whether 
the condtion is true or not.
Whenever a 'break' is encountered inside the loop the control is 
sent outside the loop.
*/
#include<stdio.h>

int main()
{
    int i = 0;
    do{
        printf("The value of i is: %d\n",i);
        if (i==4)
        {
            break;
        }
        i++;
    }while(i<10);
    return 0;
}