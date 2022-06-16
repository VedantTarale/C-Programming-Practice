#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a;
    srand(time(0));// ------> makes the rand function generate a different number every time.
    a = rand()%100 + 1; // generates a random number between 1 and 100.
    printf("Random number is %d",a);
    return 0;
}