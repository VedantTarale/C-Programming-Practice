//WRITE A PROGRAM WITH THREE FUNCTIONS
//1] GOOD MORNING FUNCTION WHICH PRINTS'GOOD MORNING'
//2] GOOD AFTERNOON FUNCTION WHICH PRINTS'GOOD AFTERNOON'
//3] GOOD NIGHT FUNCTION WHICH PRINTS'GOOD NIGHT'
//main SHOULD CALL ALL OF THESE IN ORDER 1-2-3.
#include<stdio.h>
void good_morning();
void good_afternoon();
void good_night();
int main()
{
    good_morning();
    good_afternoon();
    good_night();
    return 0;
}
void good_morning(){
    printf("Good Morning\n");
}
void good_afternoon(){
    printf("Good Afternoon\n");
}
void good_night(){
    printf("Good Night\n");
}