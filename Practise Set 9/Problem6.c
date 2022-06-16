/*Write a structrue to store dates then write a function to compare them.*/
#include<stdio.h>
typedef struct date
{
    int DD;
    int MM;
    int YYYY;
}date;
void compare(date d1, date d2){
    if (d1.YYYY>d2.YYYY)
    {
        printf("Date 1 is latest");
    }
    else if (d2.YYYY>d1.YYYY)
    {
        printf("Date 2 is latest");
    }
    else if (d1.YYYY==d2.YYYY){ 
        if (d1.MM>d2.MM)
        {
            printf("Date 1 is latest");
        }
        else if (d2.MM>d1.MM)
        {
            printf("Date 2 is latest");
        }
        else if (d1.MM==d2.MM){
            if (d1.DD>d2.DD)
        {
            printf("Date 1 is latest");
        }
        else if (d2.DD>d1.DD)
        {
            printf("Date 2 is latest");
        }
        }
    }
    
    
}
int main()
{
    date d1, d2;
    printf("Enter 'DD' for the First Date: ");
    scanf("%d",&d1.DD);
    printf("Enter 'MM' for the First Date: ");
    scanf("%d",&d1.MM);
    printf("Enter 'YYYY' for the First Date: ");
    scanf("%d",&d1.YYYY);
    printf("Enter 'DD' for the Second Date: ");
    scanf("%d",&d2.DD);
    printf("Enter 'MM' for the Second Date: ");
    scanf("%d",&d2.MM);
    printf("Enter 'YYYY' for the Second Date: ");
    scanf("%d",&d2.YYYY);
    compare(d1,d2);
    return 0;
}