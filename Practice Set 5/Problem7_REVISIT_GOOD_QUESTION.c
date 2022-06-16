// WRITE A PROGRAM USING FUNCTIONS TO PRINT THE FOLLOWING LINES(FIRST N LINES)
//*
//***
//*****
#include<stdio.h>
void star();
int main()
{
    int m,n;
    printf("enter the number of lines: ");
    scanf("%d",&m);
    n = 2*m - 1; 
    int a = 1;
    while (a<=n)
    {
        int b = 1;
        while (b<=a){
            star();
            b++;
            if (b>a)
            {
                break;
            }
            }
        printf("\n");
        a++;
        a++;
    }
    return 0;
}
void star(){
    printf("*");
}