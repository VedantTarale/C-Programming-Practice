// USE THE LIBLARY FUNTION TO CALCULATE AREA OF A SQUARE OF SIDE LENGTH A.
#include<stdio.h>
#include<math.h>
int main()
{
    float side;
    printf("Enter the value of side: \n");
    scanf("%f",&side);
    printf("The are of the square is: %f",pow(side,2));
    return 0;
}