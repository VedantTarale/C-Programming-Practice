#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter the principal amount\n");
    scanf("%f", &a);
    printf("Enter the Rate of Intrest (in percet per annum)\n");
    scanf("%f", &b);
    printf("Enter the Time Period Of Intrest (years)\n");
    scanf("%f", &c);
    printf("The Intrest to be paid is %f", (a * b * c) / 100);
    return 0;
}