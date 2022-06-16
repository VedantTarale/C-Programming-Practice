/*
Continue statement is used to immidiately move to the next iteration of the loop
The control is taken to the next iteration thus skipping everying below 'continue'
inside the loop for that iteration.
*/
#include<stdio.h>

int main()
{
    int skip =5, i=0;
    while (i<10)
    {
        i++;
        if(i!=skip){
            continue;
        }
    else{
        printf("%d",i);
    }
    }
    
    return 0;
}