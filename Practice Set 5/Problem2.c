//WRITE A FUNCTION TO CONVER CELCIUS TO FARENHEIT.
#include<stdio.h>
float convert (float celcius);
int main()
{
    float celcius;
    printf("Enter the temperature in celcius: ");
    scanf("%f",&celcius);
    printf("The temperature in farenheit is: %f",convert(celcius));
    return 0;
}
float convert (float celcius){
    float farenheit = (9 * celcius)/5 + 32;
    return farenheit;
}