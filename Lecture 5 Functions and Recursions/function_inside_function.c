#include<stdio.h>
void good_morning();
void good_afternoon();
void good_night();
int main()
{
    good_morning();
    return 0;
}
void good_morning(){
    printf("Good Morning\n");
    good_afternoon();//Funtion is called inside another function.
    good_night();
}
void good_afternoon(){
    printf("Good Afternoon\n");
}
void good_night(){
    printf("Good Night\n");
}