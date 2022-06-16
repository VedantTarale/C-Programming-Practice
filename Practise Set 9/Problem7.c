/*
Write the previoues programin for time using typedef
*/
#include<stdio.h>
typedef struct time
{
    int hr;
    int min;
    int sec;
}time;
void compare(time t1, time t2){
    if (t1.hr>t2.hr)
    {
        printf("time 1 is latest");
    }
    else if (t2.hr>t1.hr)
    {
        printf("time 2 is latest");
    }
    else if (t1.hr==t2.hr){ 
        if (t1.min>t2.min)
        {
            printf("time 1 is latest");
        }
        else if (t2.min>t1.min)
        {
            printf("time 2 is latest");
        }
        else if (t1.min==t2.min){
            if (t1.sec>t2.sec)
        {
            printf("time 1 is latest");
        }
        else if (t2.sec>t1.sec)
        {
            printf("time 2 is latest");
        }
        }
    }   
}
int main()
{
    time t1, t2;
    printf("Enter 'hours' for the Time 1: ");
    scanf("%d",&t1.hr);
    printf("Enter 'minutes' for the Time 1: ");
    scanf("%d",&t1.min);
    printf("Enter 'seconds' for the Time 1: ");
    scanf("%d",&t1.sec);
    printf("Enter 'hours' for the Time 2: ");
    scanf("%d",&t2.hr);
    printf("Enter 'minutes' for the Time 2: ");
    scanf("%d",&t2.min);
    printf("Enter 'hr' for the Time 2: ");
    scanf("%d",&t2.sec);
    compare(t1,t2);
    return 0;
}