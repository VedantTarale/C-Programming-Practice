#include <stdio.h>
int main (){
    float a;
    printf("Enter the temperature in degree celcius \n");
    scanf("%f",&a);
    printf("The equivalent temperature in farenheit is %f", ((9*a)/5)+32);
    return 0;
}